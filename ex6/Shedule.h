#pragma once

class Shedule
{
private:
    int hour;
    int minute;
    int second;

public:
    Shedule();
    Shedule(int hour, int minute, int second);
    
    void setShedule(int hour, int minute, int second);
    
    int getHour();
    int getMinute();
    int getSecond();

    void setHour(int hour);
    void setMinute(int minute);
    void setSecond(int second);

    void advanceSecond();
};

