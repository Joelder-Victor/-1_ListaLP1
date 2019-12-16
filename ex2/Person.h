#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person
{
private:
    std::string name;
    int age;
    std::string phone;
    public:
    Person(std::string n);
    Person(std::string n,int a,std::string p);
    std::string getName();
    int getAge();
    std::string getPhone();
    void setName();
    void setAge();
    void setPhone();
    void editPerson();
    void printP();

};

#endif
