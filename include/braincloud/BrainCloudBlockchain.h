// Copyright 2022 bitHeads, Inc. All Rights Reserved.

#pragma once
#pragma clang diagnostic ignored "-Wdocumentation"

#include <string>

#include "braincloud/BrainCloudTypes.h"

namespace BrainCloud {

    class IServerCallback;
    class BrainCloudClient;

    class BrainCloudBlockchain
    {
    public:
        BrainCloudBlockchain(BrainCloudClient* in_client);


        /**
         * @brief Retrieves the blockchain items owned by the caller.
         */
        void GetBlockchainItems(const std::string& in_integrationID ,const std::string& in_contextJson, IServerCallback * in_callback = NULL);
        /**
         * @brief Retrieves the uniqs owned by the caller.
         */
        void GetUniqs(const std::string& in_integrationID, const std::string& in_contextJson, IServerCallback * in_callback = NULL);

        
    private:
        BrainCloudClient * m_client;
    };
}
