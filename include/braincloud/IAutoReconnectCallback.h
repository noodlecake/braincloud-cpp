// Copyright 2026 bitHeads, Inc. All Rights Reserved.
//
//  IAutoReconnectCallback.h
//  GameClientLib
//
//  Created by brainCloud Team on 2026-02-04.
//
//

#pragma once
#if defined(__clang__)
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdocumentation"
#endif

#include <string>

namespace BrainCloud {

    class IAutoReconnectCallback
    {
    public:
        virtual ~IAutoReconnectCallback() {}

        /**
         * Method called when an auto reconnect re-authentication is successfull
         *
         * @param jsonData - returned data from the server for the re-authenticate call
         */
        virtual void autoReconnectSuccess(std::string const& jsonData) = 0;

        /**
         * Method called when an auto reconnect re-authentication has failed
         *
         * @param jsonData - returned data from the server for the re-authenticate call
         */
        virtual void autoReconnectFailed(std::string const& jsonData) = 0;
    };

};
#if defined(__clang__)
#pragma clang diagnostic pop
#endif

