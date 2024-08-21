#include<iostream>
using namespace std;
void swap(int&,int&);
int main(){
    int x,y;
    cout<<"Enter 1st Number:";
    cin>>x;
    cout<<"Enter 2nd Number:";
    cin>>y;
    cout<<"Before swapping numbers are: "<<"\n\t x= "<<x<<"\n\t y= "<<y<<endl;
    swap(x,y);
    cout<<"After swapping numbers are: "<<"\n\t x= "<<x<<"\n\t y= "<<y<<endl;
    return 0;
}
void swap(int &Num1,int &Num2){
    int temp;
    temp=Num1;
    Num1=Num2;
    Num2=temp;
}