// Copyright 2026 bitHeads, Inc. All Rights Reserved.
#include "braincloud/internal/DefaultPinger.h"

namespace BrainCloud
{
    IPinger* IPinger::create(BrainCloudClient* pClient)
    {
        return new DefaultPinger();
    }

    DefaultPinger::DefaultPinger() {}

    int DefaultPinger::ping(const std::string& url)
    {
        return 999;
    }
}
