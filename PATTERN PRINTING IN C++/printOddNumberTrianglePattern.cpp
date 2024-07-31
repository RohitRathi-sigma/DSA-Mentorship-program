#include<iostream>
using namespace std;
int main()
{
    int r=4;
    cout<<"Print odd number triangle pattern:"<<endl;
    for (int i = 1; i<=r; i++)
    {
        int c=1;
        for (int j=1; j<=i; j++)
        {
            cout<<c;
            c+=2;
        }
        
        cout<<endl;
    }
    return 0;
}