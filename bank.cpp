#include<iostream>
using namespace std;
class bank{
    private : char hname[30], bname[30],brname[30];
    int acc;
    public:void getdata(){
        cout<<"Enter Account Holder Name:";
        cin>>hname;
        cout<<"Enter Bank And Branch Name:";
        cin>>bname>>brname;
        cout<<"Enter Account Number:";
        cin>>acc;
    } 
    void display(){
        cout<<"Account Holder Name:"<<hname<<"\nBank Name:"<<bname<<"\nBranch Name:"<<brname<<"\nAccount Number:"<<acc<<endl;
        
    }
};
int main(){
    bank b;
    b.getdata();
    b.display();
    return 0;
}