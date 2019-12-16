#include "Person.h"
#include <string>
#include <iostream>

using namespace std;

Person::Person(string n){
    name=n;
}
Person::Person(string n,int a,string p){
    name=n;
    age=a;
    phone=p;
}
string Person::getName(){
    return name;
}
int Person::getAge(){
    return age;
}
string Person::getPhone(){
    return phone;
}
void Person::setName(){
    cout<<"Enter name:";
    cin>>name;
}
void Person::setAge(){
    cout<<"Enter age:";
    cin>>age;
}
void Person::setPhone(){
    cout<<"Enter Phone Number:";
    cin>>phone;
}
void Person::editPerson(){
    setName();
    setAge();
    setPhone();
}
void Person::printP(){
    cout<<"Name:"<<getName()<<endl;
    cout<<"Age:"<<getAge()<<endl;
    cout<<"Phone Number:"<<getPhone()<<endl;
}
