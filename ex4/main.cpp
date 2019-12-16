#include <iostream>
#include "Data.h"

using namespace std;

int main(void){
    Data date1 = Data(05,12,2019);
    Data date2 = Data(13,12,1912);
    if(date1.toCompare(date2)==0)
        cout<<"The dates are same"<<endl;
    if(date1.toCompare(date2)>0)
        cout<<"The first date is bigger"<<endl;
    if (date1.toCompare(date2)<0)
        cout<<"The first date is shorter "<<endl;
    
    if(date1.isLeap(date1.getYear()))
         cout<< "Is Leap Year"<<endl;
    else
        cout<< "Isn't Leap Year"<<endl;
    cout<<date1.getMonthCursive(date2.getMonth())<<endl;
}
