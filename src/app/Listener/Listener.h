#ifndef LISTENER_H
#define LISTENER_H

#pragma once
#include "CardReader.h"
#include "Controller.h"
#include "Monitor.h"
#include <string.h>

class Listener
{
public:
    Listener();
    ~Listener();
    void checkEvent();
    bool checkRfid();

private:
    CardReader *rfid;
    Controller *controller;
    uint8_t rfidData[16];
};

#endif