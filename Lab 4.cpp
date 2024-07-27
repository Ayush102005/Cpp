#include<iostream>
#include<iomanip>
using namespace std;
void add(int,int);
void add(double,double);
int main(){
    int iNum1,iNum2;
    double dVal1,dVal2;
    cout<<"Enter the Integral Values of i1 and i2:";
    cin>>iNum1>>iNum2;
    cout<<"Enter the Double values of d1 and d2:";
    cin>>dVal1>>dVal2;
    add(iNum1,iNum2);
    add(dVal1,dVal2);
    return 0;
}
void add(int p, int q){
    cout<<"Performing Integral Addition"<<endl;
    cout<<"Sum of "<<p<<" and "<<q<<" is "<<p+q<<endl;
}
void add(double p, double q){
    cout<<"Performing Double Addition"<<endl;
    cout<<"Sum of "<<p<<" and "<<q<<" is "<<p+q<<endl;
}