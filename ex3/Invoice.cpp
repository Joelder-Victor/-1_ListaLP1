#include "Invoice.h"
#include <string>
using namespace std;
Invoice::Invoice(int n,string d,int q, float p){
        setInvoice(n,d,q,p);
}
void Invoice::setInvoice(int n, string d,int q, float p){

    quantity = (q<0) ? 0 : q; // Se 'q' menor que 0 quantity recebe 0, se não recebe 'q';
    price = (p<0) ? 0.0 : p;    
    number = n;
    description = d;
}
int Invoice::getNumber(){
    return number;
}
string Invoice::getDescription(){
    return description;
}
int Invoice::getQuantity(){
    return quantity;
}
float Invoice::getPrice(){
    return price;
}
float Invoice::getInvoiveAmount(){
    return quantity*price;
}