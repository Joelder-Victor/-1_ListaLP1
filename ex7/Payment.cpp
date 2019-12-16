#include "Payment.h"

using namespace std;
Payment::Payment(){
    paymentValue=0;
}

Payment::Payment(string workerName, double paymentValue){
    setPaymentValue(paymentValue);
    setWorkerName(workerName);
}
void Payment::setPaymentValue(double v){
    if(v>0)
        this->paymentValue=v;
}
void Payment::setWorkerName(string n){
    this->workerName=n;
}
double Payment::getPaymentValue(){
    return paymentValue;
}
string Payment::getWorkerName(){
    return workerName;
}