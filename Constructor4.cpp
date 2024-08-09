#include<iostream>
#include<math.h>
using namespace std;
class Power{
    int num,pr,ans;
    public:
    Power(int n=0, int p=3){
    num=n;
    pr=p;
    ans=pow(num,pr);
}
void display(){
    cout<<num<<" power "<<pr<<" is "<<ans<<endl;

}
};
int main(){
Power p1,p2(2),p3(3,3); 
p1.display();p2.display();p3.display();
return 0;
}