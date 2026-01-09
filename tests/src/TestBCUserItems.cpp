#include "gtest/gtest.h"
#include "braincloud/BrainCloudClient.h"
#include "TestResult.h"
#include "TestBCUserItems.h"
#include "braincloud/reason_codes.h"
#include "braincloud/http_codes.h"

using namespace BrainCloud;

TEST_F(TestBCUserItems, AwardUserItem)
{
    TestResult tr;
    m_bc->getUserItemsService()->awardUserItem("sword001", 5, true, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, DropUserItem)
{
    TestResult tr;
    m_bc->getUserItemsService()->dropUserItem("invalidForNow", 1, true, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, GetUserItemsPage)
{
    std::string context = "{\"test\": \"Testing\"}";
    TestResult tr;
    m_bc->getUserItemsService()->getUserItemsPage(context, true, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, GetUserItemsPageOffset)
{
    std::string context = "eyJzZWFyY2hDcml0ZXJpYSI6eyJnYW1lSWQiOiIyMDAwMSIsInBsYXllcklkIjoiYzU1YzIzY2UtMGU2Yi00OWQzLTlmZjYtYWUyNDYwNWVhOWM5IiwiZ2lmdGVkVG8iOm51bGx9LCJzb3J0Q3JpdGVyaWEiOnt9LCJwYWdpbmF0aW9uIjp7InJvd3NQZXJQYWdlIjoxMDAsInBhZ2VOdW1iZXIiOm51bGwsImRvQ291bnQiOnRydWV9LCJvcHRpb25zIjpudWxsfQ";
    TestResult tr;
    m_bc->getUserItemsService()->getUserItemsPageOffset(context, 1, true, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, GetUserItem)
{
    TestResult tr;
    m_bc->getUserItemsService()->getUserItem("invalidForNow", true, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, GiveUserItemTo)
{
    TestResult tr;
    m_bc->getUserItemsService()->giveUserItemTo(GetUser(UserA)->m_profileId, "invalidForNow", 1, 1, true, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, CANNOT_GIVE_ITEM_TO_SELF);
}

TEST_F(TestBCUserItems, PurchaseUserItem)
{
    TestResult tr;
    m_bc->getUserItemsService()->purchaseUserItem("sword001", 1, "", true, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, ReceiveUserItemFrom)
{
    TestResult tr;
    m_bc->getUserItemsService()->receiveUserItemFrom(GetUser(UserB)->m_profileId, "invalidForNow", &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, SellUserItem)
{
    TestResult tr;
    m_bc->getUserItemsService()->sellUserItem("invalidForNow", 1, 1, "", true, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, UpdateUserItemData)
{
    std::string newItemData = "{\"test\": \"Testing\"}";
    TestResult tr;
    m_bc->getUserItemsService()->updateUserItemData("invalidForNow", 1, newItemData, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, UseUserItem)
{
    std::string newItemData = "{\"test\": \"Testing\"}";
    TestResult tr;
    m_bc->getUserItemsService()->useUserItem("invalidForNow", 1, newItemData, true, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, PublishUserItemToBlockchain)
{
    TestResult tr;
    m_bc->getUserItemsService()->publishUserItemToBlockchain("invalidForNow", 1, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, RefreshBlockchainUserItems)
{
    TestResult tr;
    m_bc->getUserItemsService()->refreshBlockchainUserItems(&tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, removeUserItemFromBlockchain)
{
    TestResult tr;
    m_bc->getUserItemsService()->removeUserItemFromBlockchain("invalidForNow", 1, &tr);
    tr.runExpectFail(m_bc, HTTP_BAD_REQUEST, ITEM_NOT_FOUND);
}

TEST_F(TestBCUserItems, awardUserItemsWithOptions)
{
    TestResult tr;
    std::string optionsJson = "{\"blockIfExceedItemMaxStackable\": true}";
    std::string defId = "sword001";
    int32_t quantity = 1;
    bool includeDef = true;

    m_bc->getUserItemsService()->awardUserItemWithOptions(defId, quantity, includeDef, optionsJson, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, purchaseUserItemsWithOptions)
{
    TestResult tr;
    std::string optionsJson = "{\"blockIfExceedItemMaxStackable\": true}";
    std::string shopId = "";
    std::string defId = "sword001";
    int32_t quantity = 1;
    bool includeDef = true;

    m_bc->getUserItemsService()->purchaseUserItemsWithOptions(defId, quantity, shopId, includeDef, optionsJson, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, getItemPromotionDetails)
{
    TestResult tr;

    std::string shopId = "";
    std::string defId = "sword001";
    bool includeDef = true;
    bool includePromotionDetails = true;

    m_bc->getUserItemsService()->getItemPromotionDetails(defId, shopId, includeDef, includePromotionDetails, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, getItemsOnPromotion)
{
    TestResult tr;

    std::string shopId = "";
    bool includeDef = true;
    bool includePromotionDetails = true;
    std::string optionsJson = "{}";

    m_bc->getUserItemsService()->getItemsOnPromotion(shopId, includeDef, includePromotionDetails, optionsJson, &tr);
    tr.run(m_bc);
}

TEST_F(TestBCUserItems, openBundle)
{
    std::string s_awardedBundleItemId;
    TestResult tr;

    // example bundle catalog item id
    std::string bundleDefId = "equipmentBundle";
    int32_t quantity = 1;
    bool includeDef = true;

    m_bc->getUserItemsService()->awardUserItem(
        bundleDefId,
        quantity,
        includeDef,
        &tr);

    tr.run(m_bc);

    // Extract the awarded user itemId from the response
    const Json::Value &items = tr.m_response["data"]["items"];
    ASSERT_TRUE(items.isObject());
    ASSERT_GT(items.size(), 0);

    // Take the first awarded itemId
    for (Json::ValueConstIterator it = items.begin(); it != items.end(); ++it)
    {
        s_awardedBundleItemId = it.key().asString();
        break;
    }

    ASSERT_FALSE(s_awardedBundleItemId.empty());
    // TestResult tr;

    int version = 1; // or -1 if you want "any version"
    quantity = 1;
    includeDef = false;
    std::string optionsJson = "{}";

    m_bc->getUserItemsService()->openBundle(
        s_awardedBundleItemId,
        version,
        quantity,
        includeDef,
        optionsJson,
        &tr);

    tr.run(m_bc);
}