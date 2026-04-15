#pragma once

#include "json/json.h"

namespace BrainCloud
{
    class JsonUtil
    {
    public:
        static Json::Value jsonStringToValue(const std::string& jsonString);
        static Json::Value jsonStringToValue(const char * jsonString);
        static std::string jsonValueToString(const Json::Value& jsonValue);

        static void commaSepStringToJsonArray(const char * str, Json::Value & out_value);
        static Json::Value stringVectorToJson(const std::vector<std::string> & stringVec);
    };
}