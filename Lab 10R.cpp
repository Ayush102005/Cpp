#include<iostream>
#include<iomanip>
using namespace std;
void accessElemnt(int*arr,int size,int index)
{
    try
    {
        if(index<0||index>=size)
        {
            throw out_of_range("Exception occured!!! Index is out of bounds");
        }
        int values = arr[index];
        cout<<"Element at index "<<index<<" is "<<values<<std::endl;
    }
    catch(out_of_range&e)
    {
        cerr<<e.what()<<endl;
    }
}
int main()
{
    int myArray[]={10,20,30,40,50};
    int size = sizeof(myArray)/sizeof(myArray[0]);
    accessElemnt(myArray,size,3);
    accessElemnt(myArray,size,5);
    accessElemnt(myArray,size,-1);
    return 0;
}