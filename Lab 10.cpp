#include<iostream>
using namespace std;
void accessElement(int* arr, int size, int index)
{
    try{
        if(index<0||index>=size)
        {
        throw out_of_range("Exception occured!!! Index is out of bounds. ");
        }
        int value=arr[index];
        cout<<"Element at Index"<<index<<"is"<<value<<std::endl;
    }
    catch(out_of_range& e)
    {
        cerr<<e.what()<<endl;
    }
}
int main()
{
    int myArray[20];
    int size;
    cout<<"Enter the Size of Array";
    cin>>size;
    cout<<"Enter The Elements of Array";
    for(int i=0;i<size;i++)
    {
        cin>>myArray[i];
    }
    int a;
    int n;
    cout<<"Enter The No.of Index";
    cin>>n;
    for(int j=0;j<n;j++)
    {
        cout<<"Enter The Value Of Index";
        cin>>a;
        accessElement(myArray,size,a);
    }
   
    return 0;
}