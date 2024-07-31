#include<iostream>
using namespace std;
int main()
{
    int r=4;
    int c=4;
    cout<<"Print reverse star triangle pattern:"<<endl;
    for (int i = 1; i<r; i++)
    {
        for (int j=c; j>=i; j--)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}