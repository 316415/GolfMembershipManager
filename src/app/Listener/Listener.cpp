#include "Listener.h"

Listener::Listener()
: rfid(new CardReader(new SPI(10,3000000))), controller(new Controller())
{
}

Listener::~Listener()
{

}



void Listener::checkEvent()
{
    if(checkRfid())
    {
        controller->updateEvent(rfid->get_card_number());
    }
    
    
}


bool Listener::checkRfid()
{
    static unsigned int prevRfidTime = 0;
    if(millis() - prevRfidTime > 1000)
    {
        prevRfidTime = millis();
    }
    else
    {
        return false;
    }

    if(rfid->isCard())
    {
        return true;
    }
    return false;
}