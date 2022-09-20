#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once
#include "DeviceData.h"
#include "Monitor.h"

class Controller
{
public:
    Controller();
    virtual ~Controller();
    Monitor *monitor;
    void updateEvent(DeviceData data);

private:

};

#endif