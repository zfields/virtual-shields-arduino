#ifndef ISystemTime_H
#define ISystemTime_H


struct ISystemTime
{
    static void delay (const uint32_t milliseconds_);
    static uint32_t millis (void);
};

#endif // ISystemTime_H
