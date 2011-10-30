#include "textui.h"

TextUI_::TextUI_(statistic_ *stat)
{
    statistic = stat;
    start();
}

//-----------------------------------------------------------------------------

void TextUI_::run()
{
    while(true)
    {
        sleep(1);
        system("clear");
        std::cout << "Video Quality Evaluation Program"<<std::endl;
        std::cout << "Amir Hossein Mandegar<amandegar@gmail.com>"<<std::endl;
        std::cout << "-------------------------------------------------------------------------------------"<<std::endl;
        std::cout << " total captured packet: " << statistic->getCounter(CNT_TOTAL)<<std::endl;
        std::cout << " total UDP  packet: " << statistic->getCounter(CNT_UDP)<<std::endl;
        std::cout << " total TCP  packet: " << statistic->getCounter(CNT_TCP)<<std::endl;
        std::cout << " total RTSP packet: " << statistic->getCounter(CNT_RTSP)<<std::endl;
        std::cout << " total RTP  packet: " << statistic->getCounter(CNT_RTP)<<std::endl;
        std::cout << " total RTCP packet: " << statistic->getCounter(CNT_RTCP)<<std::endl;
        std::cout << " Queue length: " << statistic->getCounter(CNT_QUEUE)<<std::endl;
    }
}
//-----------------------------------------------------------------------------
