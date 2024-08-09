#include<iostream>
using namespace std;
class Transport
{
    public:
    int wheels;
    string name;
    string color;
    string type;
    Transport(int n)
    {
        wheels=n;
    }
    Transport(string str1,string str2)
    {
        name=str1;
        color=str2;
    }
    Transport(string str)
    {
        type=str;
    }
};
int main()
{
    Transport car(4);
    Transport bike("Honda","Black");
    Transport cycle("Roadways");
    cout<<"Car has "<<car.wheels<<" wheels\n";
    cout<<"Name of the bike is "<<bike.name<<" Color of the bike is"<<bike.color<<endl;
    cout<<"Cycle is a "<<cycle.type<<" mode of Transportation";
}