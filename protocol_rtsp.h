#ifndef RTSP_H
#define RTSP_H

#include "protocolhandler.h"
#include <netinet/ip.h>

class protocol_rtsp : public protocolHandler_
{
public:
    protocol_rtsp(statistic_ *stat);
    int check(u_int16_t protocol, u_int16_t sport, u_int16_t dport);
    int process();
};

#endif // RTSP_H