// Copyright 2026 bitHeads, Inc. All Rights Reserved.
//
//  ILongSession.h
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

    class ILongSessionCallback
    {
    public:
        virtual ~ILongSessionCallback() {}

        /**
         * Method called when a long session re-authentication is successfull
         *
         * @param jsonData - returned data from the server for the re-authenticate call
         */
        virtual void longSessionSuccess(std::string const& jsonData) = 0;

        /**
         * Method called when a long session re-authentication has failed
         *
         * @param jsonData - returned data from the server for the re-authenticate call
         */
        virtual void longSessionFailed(std::string const& jsonData) = 0;
    };

};
#if defined(__clang__)
#pragma clang diagnostic pop
#endif

