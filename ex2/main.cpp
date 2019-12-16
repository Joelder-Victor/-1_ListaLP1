#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "ctype.h"
#include "Person.h"

using namespace std;
void displayMessage(string *n,int *a,string *p);

int main(){
    string n,p;
    int a;
    displayMessage(&n,&a,&p);
    Person person1=Person(n);
    displayMessage(&n,&a,&p);
    Person person2=Person(n,a,p);

    person1.printP();
    person2.printP();

    person1.editPerson();
    person1.printP();
    
}
void displayMessage(string *n,int *a,string *p){
    cout<<"Enter name:";
    cin>>*n;

    cout<<"Enter age:";
    cin>>*a;

    cout<<"Enter Phone Number:";
    cin>>*p;

}
