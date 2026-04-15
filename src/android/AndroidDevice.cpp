#include "braincloud/internal/Device.h"
#include "braincloud/internal/android/AndroidGlobals.h"

#include <jni.h>
#include <time.h>

namespace BrainCloud
{
    namespace Device
    {
        static bool detectOculusDevice()
        {
            if (!appEnv) return false;

            // -------------------------------------------------
            // Check PackageManager for Oculus / Meta services
            // -------------------------------------------------
            jclass jcActivityThread = appEnv->FindClass("android/app/ActivityThread");
            jmethodID jmCurrentApp = appEnv->GetStaticMethodID(
                jcActivityThread, "currentApplication", "()Landroid/app/Application;");

            jobject joApp = appEnv->CallStaticObjectMethod(jcActivityThread, jmCurrentApp);
            if (!joApp) return false;

            jclass jcContext = appEnv->GetObjectClass(joApp);
            jmethodID jmGetPM = appEnv->GetMethodID(
                jcContext, "getPackageManager", "()Landroid/content/pm/PackageManager;");
            jobject joPM = appEnv->CallObjectMethod(joApp, jmGetPM);

            jclass jcPM = appEnv->GetObjectClass(joPM);
            jmethodID jmGetPkgInfo = appEnv->GetMethodID(
                jcPM, "getPackageInfo",
                "(Ljava/lang/String;I)Landroid/content/pm/PackageInfo;");

            auto hasPackage = [&](const char* pkg) -> bool
                {
                    jstring jPkg = appEnv->NewStringUTF(pkg);
                    appEnv->CallObjectMethod(joPM, jmGetPkgInfo, jPkg, 0);
                    appEnv->DeleteLocalRef(jPkg);

                    if (appEnv->ExceptionCheck())
                    {
                        appEnv->ExceptionClear();
                        return false;
                    }
                    return true;
                };

            if (hasPackage("com.oculus.vrservice") ||
                hasPackage("com.oculus.systemdriver") ||
                hasPackage("com.meta.xr.vrservice"))
            {
                return true;
            }

            // -------------------------------------------------
            // Check VR head tracking feature
            // -------------------------------------------------
            jmethodID jmHasFeature = appEnv->GetMethodID(
                jcPM, "hasSystemFeature", "(Ljava/lang/String;)Z");

            jstring vrFeature =
                appEnv->NewStringUTF("android.hardware.vr.headtracking");

            jboolean hasVR = appEnv->CallBooleanMethod(joPM, jmHasFeature, vrFeature);
            appEnv->DeleteLocalRef(vrFeature);

            return hasVR == JNI_TRUE;
        }

        const std::string& getPlatformName()
        {
            static std::string platformName;
            static bool initialized = false;

            if (!initialized)
            {
                initialized = true;
                platformName = detectOculusDevice() ? "OCULUS" : "ANG";
            }

            return platformName;
        }

        void getLocale(float* out_timezoneOffset, std::string* out_languageCode, std::string* out_countryCode) {

            // check for AndroidBridge class, if it exists assume java activity will initialize
            jclass jcAndroidBridge = appEnv->FindClass("com/bitheads/braincloud/AndroidBridge");
            if (!appEnv->ExceptionCheck()) {
                // do NOT set countryCode etc here as the android
                // java layer is responsible for setting it.
                return;
            }
            appEnv->ExceptionClear();

            jclass jcLocale = appEnv->FindClass("java/util/Locale");
            jmethodID jmDefault = appEnv->GetStaticMethodID(jcLocale, "getDefault",
                                                            "()Ljava/util/Locale;");

            jobject joLocale = appEnv->CallStaticObjectMethod(jcLocale, jmDefault);

            jmethodID jmCountry = appEnv->GetMethodID(jcLocale, "getCountry",
                                                      "()Ljava/lang/String;");
            auto value = (jstring) (appEnv->CallObjectMethod(joLocale, jmCountry));
            const char *valueP = appEnv->GetStringUTFChars(value, nullptr);
            *out_countryCode = std::string(valueP);
            if (*out_countryCode == "419")
            {
                *out_countryCode = "_LA_";
            }

            if (*out_countryCode == "Hans" || *out_countryCode == "Hant")
            {
                *out_countryCode = "CN";
            }

            appEnv->ReleaseStringUTFChars(value, valueP);

            jmethodID jmLanguage = appEnv->GetMethodID(jcLocale, "getLanguage",
                                                       "()Ljava/lang/String;");
            value = (jstring) (appEnv->CallObjectMethod(joLocale, jmLanguage));
            valueP = appEnv->GetStringUTFChars(value, nullptr);
            *out_languageCode = std::string(valueP);
            appEnv->ReleaseStringUTFChars(value, valueP);

            jclass jcDateType = appEnv->FindClass("java/util/Date");
            jmethodID jmDateInit= appEnv->GetMethodID(jcDateType, "<init>", "()V");
            jobject joDateObject= appEnv->NewObject(jcDateType , jmDateInit);
            jmethodID jmDateTime= appEnv->GetMethodID(jcDateType, "getTime", "()J");

            jlong currtime = appEnv->CallLongMethod(joDateObject, jmDateTime);

            jclass jcTimeZone = appEnv->FindClass("java/util/TimeZone");
            jmDefault = appEnv->GetStaticMethodID(jcTimeZone, "getDefault",
                                                  "()Ljava/util/TimeZone;");
            jobject joTimeZone = appEnv->CallStaticObjectMethod(jcTimeZone, jmDefault);
            jmethodID jmTimeZone = appEnv->GetMethodID(jcTimeZone, "getOffset", "(J)I");

            *out_timezoneOffset = appEnv->CallIntMethod(joTimeZone, jmTimeZone, currtime)  / static_cast<float>(60 * 60 * 1000);
        }
    }
}
