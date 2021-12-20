// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "RakWebSocket.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RakWebSocketClient : public RakWebSocket {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RAKWEBSOCKETCLIENT
public:
    class RakWebSocketClient& operator=(class RakWebSocketClient const&) = delete;
    RakWebSocketClient(class RakWebSocketClient const&) = delete;
    RakWebSocketClient() = delete;
#endif

public:
    /*0*/ virtual ~RakWebSocketClient();
    /*1*/ virtual void _updateState();
    /*2*/ virtual unsigned int _genMaskingKey() const;
    /*
    inline  ~RakWebSocketClient(){
         (RakWebSocketClient::*rv)();
        *((void**)&rv) = dlsym("??1RakWebSocketClient@@UEAA@XZ");
        return (this->*rv)();
    }
    */

protected:

private:

};