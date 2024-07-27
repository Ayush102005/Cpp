#include<iostream>
using namespace std;
class math{
    public:float Volume(float a)
    {
        float cube;
        cout<<"Enter the value of a";
        cin>>a;
        cube=a*a*a;
        cout<<"Volume of Cube = "<<cube<<endl;
    }
    double Volume(double r, double h)
    {
        double c;
        cout<<"Enter the values "<<endl;
        cin>>r>>h;
        c=3.14*r*r*h;
        cout<<"results = "<<c<<endl;
    
    }
};
int main()
{  
    float a;
    double r,h;
    math m1;
    m1.Volume(a);
    m1.Volume(r,h);
    return 0;
}