#include<iostream>
using namespace std;
class Student
{
private:
       int USN;
       float Marks;
public:
    Student()
    {
        cout<<"Default Constructor"<<endl;
    }
    Student(int a,float b)
    {
        USN=a;
        Marks=b;
        cout<<"Parametrised Constructor has involked"<<endl;
    }
    void display(){
        cout<<"Display Student details : "<<USN<<"\n" <<Marks<<endl;
    }
};
int main()
{
    Student s1;
    Student s3(12,65.5);
    s1.display();
    s3.display();
}