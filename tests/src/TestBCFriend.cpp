#include <stdlib.h>
#include "gtest/gtest.h"
#include "braincloud/BrainCloudClient.h"
#include "braincloud/BrainCloudEntity.h"
#include "TestResult.h"
#include "json/json.h"
#include "braincloud/FriendPlatform.h"
#include "braincloud/AuthenticationType.h"

#include "TestBCFriend.h"

#include <vector>
#include <string>

using namespace BrainCloud;

TEST_F(TestBCFriend, GetProfileInfoForCredential)
{
	TestResult tr;
	m_bc->getFriendService()->getProfileInfoForCredential(GetUser(UserA)->m_id, AuthenticationType::Universal, &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, GetProfileInfoForExternalAuthId)
{
	TestResult tr;
	m_bc->getFriendService()->getProfileInfoForExternalAuthId(GetUser(UserA)->m_id, "failType", &tr);
	tr.runExpectFail(m_bc, 400, INVALID_CREDENTIAL);
}

TEST_F(TestBCFriend, GetExternalIdForProfileId)
{
	TestResult tr;
	m_bc->getFriendService()->getExternalIdForProfileId(GetUser(UserA)->m_profileId, "Facebook", &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, FindUsersByExactName)
{
	TestResult tr;
	m_bc->getFriendService()->findUsersByExactName("test", 10, &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, FindUsersBySubstrName)
{
	TestResult tr;
	m_bc->getFriendService()->findUsersBySubstrName("test", 10, &tr);
	tr.run(m_bc);
}

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
TEST_F(TestBCFriend, FindPlayerByUniversalId)
{
	TestResult tr;
	m_bc->getFriendService()->findPlayerByUniversalId("search", 10, &tr);
	tr.run(m_bc);
}
#pragma clang diagnostic pop

TEST_F(TestBCFriend, GetSummaryDataForProfileId)
{
	TestResult tr;
	m_bc->getFriendService()->getSummaryDataForProfileId(GetUser(UserA)->m_profileId, &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, AddFriends)
{
	AddFriends();
}

TEST_F(TestBCFriend, ListFriends)
{
	TestResult tr;
	m_bc->getFriendService()->listFriends(FriendPlatform::All, true, &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, RemoveFriends)
{
	AddFriends();

	TestResult tr;
	std::vector<std::string> profiles;
	profiles.push_back(GetUser(UserB)->m_profileId);

	m_bc->getFriendService()->removeFriends(profiles, &tr);
	tr.run(m_bc);
}

TEST_F(TestBCFriend, GetUsersOnlineStatus)
{
	TestResult tr;
	std::vector<std::string> profiles;
	profiles.push_back(GetUser(UserB)->m_profileId);

	m_bc->getFriendService()->getUsersOnlineStatus(profiles, &tr);
	tr.run(m_bc);
}

void TestBCFriend::AddFriends()
{
	TestResult tr;
	std::vector<std::string> profiles;
	profiles.push_back(GetUser(UserB)->m_profileId);

	m_bc->getFriendService()->addFriends(profiles, &tr);
	tr.run(m_bc);
}



