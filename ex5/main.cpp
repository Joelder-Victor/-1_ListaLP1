#include <iostream>
#include "Shedule.h"

using namespace std;

int main(){
    Shedule h1=Shedule(23,59,59);
    
    h1.advanceSecond();

    cout<<h1.getHour()<<":"<<h1.getMinute()<<":"<<h1.getSecond()<<endl;
}