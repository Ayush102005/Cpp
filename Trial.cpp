#include<iostream>
using namespace std;
class maths
{
private:int x,y,sum,sub,mul;
public: int addition()
{
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    sum = x + y;
    cout<< "Sum is ="<<sum<<endl;
}
int subtract()
{
    
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;
    sub = x-y;
    cout<<"Sub is ="<<sub<<endl;
}
int multiplication()
{
    
    cout<<"Enter the value of x and y"<<endl;
    cin>>x>>y;   
    mul = x*y;
    cout<<"Mul is ="<<mul<<endl;
}
};
int main(){
    maths m1;
    m1.addition();
    m1.subtract();
    m1.multiplication();
    return 0;
}
    
