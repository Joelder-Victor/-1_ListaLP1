#pragma once
#include "Data.h"
#include "Shedule.h"
class Flight
{
private:
    int flight;
    int seat[100]={0,0};
    Data date;
    Shedule shedule;
public:
    Flight();
    Flight(int flight, Data date, Shedule shedule);
    int freeNext();
    bool check(int number);
    bool occupy(int number);
    int vacancies();
    int getNumberFlight();
    Data getData();
    Shedule getShedule();
    
};
