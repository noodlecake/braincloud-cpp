#include "braincloud/internal/Device.h"
#include <iostream>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include <string>
#include <cmath>

static const std::string PLATFORM_NAME("LINUX");

namespace BrainCloud
{
    namespace Device
    {
        const std::string& getPlatformName()
        {
            return PLATFORM_NAME;
        }

        void getLocale(float* out_timezoneOffset, std::string* out_languageCode, std::string* out_countryCode)
        {
			//Defaults
			if (out_timezoneOffset) *out_timezoneOffset = 0.0f;
			if (out_languageCode) *out_languageCode = "en";
			if (out_countryCode) *out_countryCode = "US";
			
			//
			// 1️⃣Get locale from environment (LANG, LC_ALL, etc.)
			//
			const char* langEnv = std::getenv("LC_ALL");
			if (!langEnv || !*langEnv) langEnv = std::getenv("LANG");

			if (langEnv && *langEnv)
			{
				std::string locale(langEnv);
				// Example: "en_US.UTF-8"
				size_t underscore = locale.find('_');
				if (underscore != std::string::npos)
				{
					if (out_languageCode)
						*out_languageCode = locale.substr(0, underscore);

					size_t dot = locale.find('.', underscore);
					std::string country = (dot != std::string::npos)
						? locale.substr(underscore + 1, dot - underscore - 1)
						: locale.substr(underscore + 1);

					if (out_countryCode)
						*out_countryCode = country;
				}
				else if (out_languageCode)
				{
					// Fallback: only language part (e.g., "en")
					*out_languageCode = locale;
				}
			}

			//
			// 2️⃣ Compute timezone offset (in hours)
			//
			std::time_t now = std::time(nullptr);
			std::tm local_tm = *std::localtime(&now);
			std::tm utc_tm   = *std::gmtime(&now);

			double secondsOffset = std::difftime(std::mktime(&local_tm), std::mktime(&utc_tm));
			float hoursOffset = static_cast<float>(secondsOffset / 3600.0);

			if (out_timezoneOffset)
				*out_timezoneOffset = hoursOffset;
			
			if (*out_countryCode == "419")
            {
                *out_countryCode = "_LA_";
            }

            if (*out_countryCode == "Hans" || *out_countryCode == "Hant")
            {
                *out_countryCode = "CN";
            }
        }
    }
}
