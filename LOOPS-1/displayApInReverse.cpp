#include<iostream>
using namespace std;
int main()
{
    int a = 100;
    cout<<"Arithmetic Progression terms starting from 100 : ";
    while (a>0)
    {
        cout<<a;
        if (a>3)
        {
            cout<<",";
        }\
        a = a-3;
        
    }
    return 0;
}