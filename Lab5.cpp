#include<iostream>
#include<iomanip>
using namespace std;
class shape{
    public:void show();
};
void shape::show()
{
    cout<<"This is a shape"<<endl;
}
class Polygon:public shape
{
    public:void show();
};
void Polygon::show()
{
    cout<<"Polygon is a Shape"<<endl;
}
class Triangle:public Polygon
{
    public:void show();
};
void Triangle::show()
{
    cout<<"Triangle is a Polygon"<<endl;
}
class Rectangle:public Polygon
{
    public:void show();
};
void Rectangle::show()
{
    cout<<"Rectangle is a Polygon"<<endl;
}
class Square:public Rectangle
{
    public:void show();
};
void Square::show()
{
    cout<<"Square is a Polygon"<<endl;
}
int main()
{
    shape s1;
    Polygon p1;
    Rectangle r1;
    Triangle t1;
    Square sq1;
    s1.show();
    p1.show();
    r1.show();
    t1.show();
    sq1.show();
}