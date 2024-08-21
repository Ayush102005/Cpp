#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string F1Name;
    char mesg[40] = {0}; 
    char ch = '\0'; 
    cout << "Enter the File you want to create: ";
    cin >> F1Name;
    cin.get();
    ofstream fout(F1Name.c_str());
    if(fout.fail())
    {
        cout << "\n Failed to create file" << endl;
    }
    else
    {
        cout << "\n File " << F1Name << " Created Successfully" << endl;
    }
    cout << "Enter a message: " << endl;
    cin.getline(mesg, 40);
    fout << mesg << endl;
    cout << "\n Message Written to file Successfully \n" << endl;
    
    fout.close();
    ifstream fin(F1Name.c_str());
    if(fin.fail())
    {
        cout << "\n Failed to open file for reading" << endl;
    }
    else
    {
        cout << "Here are the contents of " << F1Name << " : \n";
        while (fin.get(ch))
        {
            cout << ch; 
        }
        cout << "\n Done reading file contents \n" << endl;
    }
    fin.close();
    return 0;
}
