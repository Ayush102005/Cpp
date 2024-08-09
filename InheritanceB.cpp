#include <iostream>
using namespace std;
class seed
{
public:
    void growing()
    {
        cout << "i am a seed" << endl;
    }
};
/*void seed::growing()
{
   cout<<"i am a seed"<<endl;
   }*/
class fruit : public seed
{
public:
    void grown()
    {
        cout << "i come from seed" << endl;
    }
};
class flower :virtual public seed, virtual public fruit
{
public:
    void eat()
    {
        cout << "eat mangoes" << endl;
    }
};
int main()
{

    flower fl;
    fl.growing();
    fl.grown();
    fl.eat();
    return 0;
}