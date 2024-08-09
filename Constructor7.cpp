#include <iostream> 
using namespace std; 
class Transport 
{
 public: 
int wheels; 
Transport(int n) 
 {
 wheels=n; 
} 
};
int main() 
{ 
Transport car(4); 
Transport bike(2); 
cout<<"Car has "<<car.wheels<<" wheels\n"; 
cout<<"Bike has "<<bike.wheels<<" wheels\n"; 
return 0;
 }
