#include "Data.h"
#include <iostream>

using namespace std;
Data::Data(){
    this-> day = 01;
    this-> month = 01;
    this-> year = 0001;
}
Data::Data(int day,int month,int year)
{
	setDay(day);
    setMonth(month);
    setYear(year);
}
void Data::setDay(int day){
    if(day>0 && day<32)
        this-> day = day;
    else
        this-> day = 01;
    
}
void Data::setMonth(int month){
    if(month>0 && month<13)
        this-> month = month;
    else
        this-> month = 01;
    
}
void Data::setYear(int year){
    if(year < 0)
        this ->year = 0001;
    else
        this -> year=year;
    
}
int Data::getDay(){
	return day;
}
int Data::getMonth(){
	return month;
}
int Data::getYear(){
	return year;
}
int Data::toCompare(Data date){
    if (this->year > date.getYear())
        return 1;
    else if (this-> month > date.getMonth())
        return 1;
    else if (this-> day > date.getDay())
        return 1;
    else if (this->year < date.getYear())
        return -1;
    else if (this-> month < date.getMonth())
        return -1;
    else if (this-> day < date.getDay())
        return -1;
    else
        return 0;
    
}
string Data::getMonthCursive(int month){
    switch (month)
    {
    case 1:
        return "January";
        break;
    case 2:
        return "February";
        break;
    case 3:
        return "March";
        break;
    case 4:
        return "April";
        break;
    case 5:
        return "May";
        break;
    case 6:
        return "June";
        break;
    case 7:
        return "July";
        break;
    case 8:
        return "August";
        break;
    case 9:
        return "September";
        break;
    case 10:
        return "Octuber";
        break;
    case 11:
        return "November";
    case 12:
        return "December";
        break;
    }

}
bool Data::isLeap(int year){
    
    if(( (year % 4) == 0) && ((year%100) != 0)){
        return true;
    }
        
    else if( year % 400 == 0){
        return true;
    }
    else
        return false;
}