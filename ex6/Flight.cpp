#include "Flight.h"

Flight::Flight(){

}
Flight::Flight(int flight, Data date, Shedule shedule){
    if(flight>=0)
        this-> flight =flight;
    this-> date = date;
    this-> shedule = shedule;
}
int Flight::freeNext(){
    for ( int i = 0; i < 100; i++)
    {
        if(seat[i]== 0)
            return i;
    }
    return -1;
}
bool Flight::check(int number){

    if(seat[number]== 1)
        return true;
    else
        return false;
}
bool Flight::occupy(int number){
    if(seat[number]!=1){
        seat[number]=1;
        return true;}
    else
        return false;
}
int Flight::vacancies(){
    int c=0;
    for ( int i = 0; i < 100; i++)
    {
        if(seat[i]== 0)
            c++;
    }
    return c;
}
int Flight::getNumberFlight(){
    return flight;
}
Data Flight::getData(){
    return date;
}
Shedule Flight::getShedule(){
    return shedule;
}
