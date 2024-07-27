#include<iostream>
#include<iomanip>
using namespace std;
void fnDivide(int,int);
int main(void)
{
    int iNum1,iNum2;
    cout<<"Enter the value of m and n: ";
    cin>>iNum1>>iNum2;
    try
    {
        fnDivide(iNum1,iNum2);
    }
    catch(logic_error& e)
    {
        cout<<"Processing error"<<endl<<e.what()<<"occured.\n";
    }
    return 0;
}
void fnDivide(int v1,int v2)
{
    double dRes;
    if(v2==0)
    throw logic_error("Division by Zero Exception");
    dRes = (double)(v1)/v2;
    cout<<v1<<"divided by"<<v2<<"is equal to "<<dRes<<endl<<endl;
}
    
