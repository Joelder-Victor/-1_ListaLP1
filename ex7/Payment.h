#pragma once
#include <string>
class Payment
{
private:
    double paymentValue;
    std::string workerName; 
public:
    Payment();
    Payment(std::string workerName,double paymentValue);
    void setPaymentValue(double v);
    void setWorkerName(std::string n);
    double getPaymentValue();
    std::string getWorkerName();

};


