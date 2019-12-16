#include<iostream>
#include"Flight.h"

using namespace std;
int main(){
    Data d1=Data(1,2,2019);
    Shedule s1=Shedule(00,05,30);
    Flight f1=Flight(1,d1,s1);
  
   cout<<f1.getNumberFlight()<<endl;
   if(!f1.occupy(2))
        cout<<"imposible"<<endl;
   cout<<f1.vacancies()<<endl;
}