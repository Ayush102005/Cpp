#include<iostream>
#include<string>
using namespace std;
class Employee{
    string Emp_name;
    int id;
    public:
      Employee(){
        cout<<"Enter Employee Name:"<<endl;
        cin>>Emp_name;
        cout<<"Enter Employee Id:"<<endl;
        cin>>id;    
      }
      Employee(string Name, int a){
        Emp_name=Name;
        id=a;
      }
      void display(){
        cout<<"Employee Name : "<<Emp_name<<endl;
        cout<<"Employee Id : "<<id<<endl;
      }
};
int main(){
    Employee E1;
    E1.display();
    Employee E2("Ayush", 11025);
    E2.display();
    return 0;
}