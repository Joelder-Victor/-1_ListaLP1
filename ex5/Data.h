#pragma once
#include <string>
class Data
{
private:
    int day;
    int month;
    int year;
public:
    Data();
    Data(int day, int month, int year);
    int toCompare(Data date);
    std::string getMonthCursive(int month);
    bool isLeap(int year);

    int getDay();
    int getMonth();
    int getYear();

    void setDay(int day);
    void setMonth(int month);
    void setYear(int year);
};
