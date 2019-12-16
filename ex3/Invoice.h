#ifndef _INVVOICE_H
#define _INVVOICE_H
#include <string>

class Invoice
{
private:
    int number,quantity;
    float price;
    std::string description;

public:
    Invoice(int n,std::string d,int q, float p);
    int getNumber();
    int getQuantity();
    float getPrice();
    float getInvoiveAmount();
    std::string getDescription();
    void setInvoice(int n, std::string d,int q, float p);
};

#endif
