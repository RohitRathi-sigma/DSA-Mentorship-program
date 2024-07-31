#include<iostream>
using namespace std;
int main()
{
    int a=4;
    int b=6;
    cout<<"Print star rectangle pattern:"<<endl;
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