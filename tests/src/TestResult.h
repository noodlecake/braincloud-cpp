#ifndef _TESTRESULT_H_
#define _TESTRESULT_H_

#include <stdlib.h>
#include "gtest/gtest.h"
#include "braincloud/BrainCloudClient.h"
#include "brainCloud/IRelayConnectCallback.h"

using namespace BrainCloud;

class TestResult : public IServerCallback, public IGlobalErrorCallback, public INetworkErrorCallback, public IRTTConnectCallback, public IRelayConnectCallback
{
public:
    bool m_done;
    bool m_result;
    int m_apiCountExpected;

    // if success
    Json::Value m_response;

    // if error
    int m_statusCode;
    int m_reasonCode;
    std::string m_statusMessage;
    int m_globalErrorCount;
    int m_networkErrorCount;

public:
    TestResult();

    void reset();
    bool run(BrainCloudClient * in_bc, bool in_noAssert=false);
    bool runExpectCount(BrainCloudClient * in_bc, int in_apiCount, bool in_noAssert=false);
    bool runExpectFail(BrainCloudClient * in_bc, int expectedStatus, int expectedReasonCode);
    virtual void serverCallback( ServiceName serviceName, ServiceOperation serviceOperation, std::string const & jsonData);
    virtual void serverError( ServiceName serviceName, ServiceOperation serviceOperation, int statusCode, int reasonCode, const std::string & statusMessage);
	virtual void rttConnectSuccess();
	virtual void rttConnectFailure(const std::string& errorMessage);
    virtual void relayConnectSuccess(const std::string& jsonResponse);
    virtual void relayConnectFailure(const std::string& errorMessage);
    
    virtual void globalError( ServiceName serviceName, ServiceOperation serviceOperation, int statusCode, int reasonCode, const std::string & jsonError);
    
    virtual void networkError();
    
    // utility to sleep for x millis
    static void sleep(int millis);
    void setMaxWaitSecs(int secs);

private:
    void sleepAndUpdate(BrainCloudClient * in_bc);
    void printStackTrace();
    std::string demangle(const char* name);
    int m_maxWaitMillis;
};

#endif


