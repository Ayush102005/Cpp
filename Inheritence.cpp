#include<iostream>
#include<iomanip>
using namespace std;
class shape{
    public:void show();
};
void shape::show()
{
    cout<<"This is shape."<<endl; 
}
class polygon:public shape{
    public:void show();
};
void polygon::show()
{
    cout<<"Polygon is a shape."<<endl;

}
class Triangle:public polygon{
    public:void show();
};
void Triangle::show()
{
    cout<<"Triangle is a polygon."<<endl;
}
class Rectangle:public polygon
{
    public:void show();
};
void Rectangle::show()
{
    cout<<"Rectangle is a polygon"<<endl;
}
class Square:public Rectangle
{
    public:void show();
};
void Square::show()
{
    cout<<"Square is a Rectangle"<<endl;
}
int main()
{
    shape s1;
    polygon p1;
    Triangle t1;
    Rectangle r1;
    Square sq1;
    s1.show();
    p1.show();
    t1.show();
    r1.show();
    sq1.show();
    return 0;
}