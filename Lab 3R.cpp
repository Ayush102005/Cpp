#include<iostream>
using namespace std;
void swap(int &,int &);
int main()
{
    int x,y;
    cout<<"\n Enter 1st Number: ";
    cin>>x;
    cout<<"\n Enter 2nd Number: ";
    cin>>y;
    cout<<"\n Before Swapping the Numbers are: "<<"\n\t x= "<<x<<"\n\t y= "<<y<<endl;
    swap(x,y);
    cout<<"\n After Swapping the Numbers are: "<<"\n\t x= "<<x<<"\n\t y= "<<y<<endl;
    return 0;
}
void swap(int &num1,int &num2)
{
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
    
}