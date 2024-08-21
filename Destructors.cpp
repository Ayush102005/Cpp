#include<iostream>
using namespace std;
int count = 0;
class alpha
{
public:
    alpha();
    ~alpha();
};

alpha::alpha()
{
    count++;
    cout<<"\n No.of object created "<<count;
}

alpha::~alpha()
{
    cout<<"\nNo.of object destroyed"<<count;
    count--;
}
int main()
{
    cout<<"\nEnterMain\n";
    alpha A1,A2,A3,A4;
    {
        cout<<"\nENTER BLOCK1\n";
        alpha A5;
    }
    {
        cout<<"\nENTER BLOCK2\n";
        alpha A6;
    }
    cout<<"\n\nRE-ENTER MAIN\n";
    return 0;
}
