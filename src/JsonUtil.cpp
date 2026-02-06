// Copyright 2026 bitHeads, Inc. All Rights Reserved.
#include "braincloud/internal/JsonUtil.h"

namespace BrainCloud
{
    Json::Value JsonUtil::jsonStringToValue(const std::string& jsonString)
    {
        Json::Value value;
        Json::Reader reader;
        reader.parse(jsonString, value);
        return value;
    }

    Json::Value JsonUtil::jsonStringToValue(const char * jsonString)
    {
        const char * end = jsonString;
        while (*end != '\0') {
            ++end;
        }
        Json::Value value;
        Json::Reader reader;
        reader.parse(jsonString, end, value);
        return value;
    }

    std::string JsonUtil::jsonValueToString(const Json::Value& jsonValue)
    {
        Json::FastWriter write;
        return write.write(jsonValue);
    }

    void JsonUtil::commaSepStringToJsonArray(const char * str, Json::Value & out_value)
    {
        std::string s = str;
        std::string json = "[";
        size_t start = 0, end = 0;

        while ((end = s.find(',', start)) != std::string::npos)
        {
            json += start == 0 ? "\"" : ",\"";
            json += s.substr(start, end - start);
            json += "\"";
            start = end + 1;
        }
        json += start == 0 ? "\"" : ",\"";
        json += s.substr(start, s.length() - start);
        json += "\"]";

        Json::Value value;
        Json::Reader reader;
        reader.parse(json, value);
        out_value = value;
    }

    Json::Value JsonUtil::stringVectorToJson(const std::vector<std::string> & stringVec)
    {
        Json::Value value(Json::arrayValue);
        for (size_t i = 0, isize = stringVec.size(); i < isize; ++i)
        {
            value.append(stringVec[i]);
        }
        return value;
    }
}
