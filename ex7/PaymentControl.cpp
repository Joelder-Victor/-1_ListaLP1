#include "PaymentControl.h"

using namespace std;

PaymentControl::PaymentControl(){

}
void PaymentControl::setPayment(Payment p,int pos){
    this->payments[pos]=p;
}
double PaymentControl::calculateTotalPayments(){
    double sum;
    for(Payment i: payments)
        sum+=i.getPaymentValue();
    return sum;
}
bool PaymentControl::isTherePaymentForWorker(string nameWorker){
    for(Payment s: payments)
        if(s.getWorkerName()==nameWorker)
            return true;
    return false;
}