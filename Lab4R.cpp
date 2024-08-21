#include<iostream>
#include<iomanip>
using namespace std;
void add(int , int);
void add(double,double);
int main()
{
    int iNum1,iNum2;
    double dVal1,dval2;
    cout<<"Enter the value of i1 and i2: ";
    cin>>iNum1>>iNum2;
    cout<<"Enter double values for d1 and d2: ";
    cin>>dVal1>>dval2;
    add(iNum1,iNum2);
    add(dVal1,dval2);
    return 0;
}
void add(int p,int q)
{
    cout<<"Performing Intergral Addition"<<endl;
    cout<<"Sum of"<<p<<" And "<<q<<" is "<<p+q<<endl;
}
void add(double p,double q)
{
    cout<<"Performing Double Addition"<<endl;
    cout<<"Sum of"<<p<<" And "<<q<<" is "<<p+q<<endl;
}