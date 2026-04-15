#pragma once

#if __APPLE__
    #include "TargetConditionals.h"
#endif

#if (!defined(TARGET_OS_WATCH) || TARGET_OS_WATCH == 0)

#include "braincloud/internal/IRelayWSSocket.h"

#import <SocketRocket/SocketRocket.h>

#include <condition_variable>
#include <mutex>
#include <queue>
#include <string>
#include <vector>

namespace BrainCloud
{
    class IRelayRocketSocketCallback
    {
    public:
        virtual ~IRelayRocketSocketCallback() {}

        virtual void onOpen() = 0;
        virtual void onClose() = 0;
        virtual void onError() = 0;
        virtual void onRecv(const uint8_t* data, int size) = 0;
    };
};

@interface RelayWebSocket<SRWebSocketDelegate> : NSObject
- (id)initWithAddress:(const std::string&)address
                 port:(int)port
               useSSL:(bool)useSSL
             callback:(BrainCloud::IRelayRocketSocketCallback*)callback;
- (void)send:(const uint8_t*)data size:(int)size;
- (void)close;
@end

namespace BrainCloud
{
    class AppleRelayWSSocket : public IRelayWSSocket, IRelayRocketSocketCallback
    {
    public:
        virtual ~AppleRelayWSSocket();

        virtual bool isConnected() override;
        virtual bool isValid() override;
        virtual void updateConnection() override;
        virtual void send(const uint8_t* pData, int size) override;
        virtual const uint8_t* peek(int& size) override;
        virtual void close() override;

    protected:
        friend class IRelayWSSocket;

        AppleRelayWSSocket(const std::string& address, int port, int maxPacketSize, bool useSSL);

    private:
        virtual void onOpen() override;
        virtual void onClose() override;
        virtual void onError() override;
        virtual void onRecv(const uint8_t* data, int size) override;

        bool _isValid;
        bool _isConnecting;

        std::mutex _mutex;
        std::condition_variable _connectionCondition;

        std::mutex _recvMutex;
        std::queue<std::vector<uint8_t>> _recvQueue;
        std::vector<uint8_t> _currentPacket;

        RelayWebSocket* _webSocket;
    };
};

#endif /* TARGET_OS_WATCH */
