#ifndef _IRELAYWSSOCKET_H_
#define _IRELAYWSSOCKET_H_

#include "IRelaySocket.h"
#include <string>

namespace BrainCloud
{
    class IRelayWSSocket : public IRelaySocket
    {
    public:
        static IRelayWSSocket* create(const std::string& address, int port, int maxPacketSize = 1400, bool useSSL = false);

        virtual ~IRelayWSSocket() {}

    protected:
        IRelayWSSocket() {}
    };
};

#endif /* _IRELAYWSSOCKET_H_ */
