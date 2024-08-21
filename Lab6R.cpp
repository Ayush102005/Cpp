#include<iostream>
#include<iomanip>
using namespace std;
class Vehicle
{
    public:void vehicle();
};
void Vehicle::vehicle()
{
    cout<<"I am a Vehicle"<<endl;
}
class FourWheeler:public Vehicle
{
    public:void fourWheeler();
};
void FourWheeler::fourWheeler()
{
    cout<<"I have Four Wheels"<<endl;
}
class Car:public FourWheeler
{
    public:void car();
};
void Car::car()
{
    cout<<"I am a Car"<<endl;
}
int main()
{
    Car mycar;
    mycar.car();
    mycar.fourWheeler();
    mycar.vehicle();
    return 0;
}