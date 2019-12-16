#pragma once
#include "Payment.h"

class PaymentControl
{
private:
    const static int maximum=100;
    Payment payments[maximum];
public:
    PaymentControl();
    void setPayment(Payment p,int pos);
    double calculateTotalPayments();
    bool isTherePaymentForWorker(std::string nameWorker);
    
};

