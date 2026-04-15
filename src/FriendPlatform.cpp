// Copyright 2026 bitHeads, Inc. All Rights Reserved.
#include "braincloud/FriendPlatform.h"

namespace BrainCloud
{
    const FriendPlatform & FriendPlatform::All = FriendPlatform("All");
    const FriendPlatform & FriendPlatform::BrainCloud = FriendPlatform("brainCloud");
    const FriendPlatform & FriendPlatform::Facebook = FriendPlatform("Facebook");
    const FriendPlatform & FriendPlatform::Unknown = FriendPlatform("Unknown");

    FriendPlatform::FriendPlatform(const std::string & friendPlatform)
    {
        m_value = friendPlatform;
    }

    const std::string & FriendPlatform::toString() const
    {
        return m_value;
    }

    const FriendPlatform & FriendPlatform::fromString(const std::string &friendPlatform)
    {
        // this is a bit slow but not used often
        if (friendPlatform == All) {
            return FriendPlatform::All;
        }
        if (friendPlatform == BrainCloud) {
            return FriendPlatform::BrainCloud;
        }
        if (friendPlatform == Facebook) {
            return FriendPlatform::Facebook;
        }

        return FriendPlatform::Unknown;
    }
}
