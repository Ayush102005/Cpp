#include<iostream>
using namespace std;
class Integer{
    int m,n;
    public:void display(){
        cout<<"The Value of m &n is "<<m<<endl<<n<<endl;
    }
};
int main(){
    Integer i1;
    i1.display();
    return 0;
}