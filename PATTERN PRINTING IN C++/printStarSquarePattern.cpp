#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int b=5;
    cout<<"Print star square pattern:"<<endl;
    for (int i = 1; i <a; i++)
    {
        for (int j = 1; j<b; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}