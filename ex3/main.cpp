#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include "ctype.h"
#include "Invoice.h"

using namespace std;

void displayMessage(int *n,string *d,int *q, float *p);
int main(void){

    int q,n;
    float p;
    string d;
    displayMessage(&n,&d,&q,&p);
    Invoice sales=Invoice(n,d,q,p);
    cout<<fixed;
    cout<<setprecision(2)<<"Your invoice is ready:"<<sales.getInvoiveAmount()<<endl;


    return 0;
}
void displayMessage(int *n,string *d,int *q, float *p){
    cout<<"Enter number:";
	cin>>*n;

	cout<<"Enter quantity:";
	cin>>*q;
    getchar();

    cout<<"Enter price:";
	cin>>*p;
    getchar();

    cout<<"Enter description:";
	getline(cin,*d);
}
