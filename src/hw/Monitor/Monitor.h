#ifndef MONITOR_H
#define MONITOR_H

#pragma once

#include <iostream>

class Monitor
{
public:
    Monitor();
    virtual ~Monitor();
    void print(uint8_t *data, int size); //uint8_tė iostream íė

private:

};

#endif