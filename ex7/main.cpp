#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "ctype.h"
#include "Payment.h"
#include "PaymentControl.h"
using namespace std;

int main(void){

    const static int max = 10;
    Payment worker[10];
    PaymentControl workers=PaymentControl();
    
    worker[0]=Payment("Joelder",5000.0);
    workers.setPayment(worker[0],0);
    worker[1]=Payment("Geraldo Bulhosa",25000.0);
    workers.setPayment(worker[1],1);

    cout<<"Does have payment for Joelder ? "<<
    (workers.isTherePaymentForWorker("Joelder")?"yes":"not")<<endl;

    cout<<"Does have payment for Victor ? "<<
    (workers.isTherePaymentForWorker("Victor")?"yes":"not")<<endl;
    
    cout<<"Total of payments:"<<workers.calculateTotalPayments()<<endl;

    return 0;

}
