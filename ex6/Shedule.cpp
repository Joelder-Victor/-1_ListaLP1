#include "Shedule.h"

Shedule::Shedule(){

}
Shedule::Shedule(int hour, int minute, int second){
    setShedule(hour,minute,second);
}

void Shedule::setShedule(int hour, int minute, int second){
    setHour(hour);
    setMinute(minute);
    setSecond(second);
}

int Shedule::getHour(){
    return hour;
}
int Shedule::getMinute(){
    return minute;
}
int Shedule::getSecond(){
    return second;
}
void Shedule::setHour(int hour){
    if(hour >= 0 && hour <24)
        this-> hour = hour;
    else
        this-> hour = 00;
    
}
void Shedule::setMinute(int minute){
    if(minute >= 0 && minute < 60)
        this-> minute = minute;
    else
        this-> minute = 00;
    
}
void Shedule::setSecond(int second){
    if(second >= 0 && second < 60)
        this-> second = second;
    else
        this-> second = 00;
}

void Shedule::advanceSecond(){
    second++;
    if(second > 59){
        setSecond(second);
        minute++;
        if(minute > 59){
            setMinute(minute);
            hour++;
                if(hour>23)
                    setHour(hour);
        }
            
    }
}