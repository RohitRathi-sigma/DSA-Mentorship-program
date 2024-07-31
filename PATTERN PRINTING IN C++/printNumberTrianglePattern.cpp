#include<iostream>
using namespace std;
int main()
{
    int r=4;
    int c=4;
    cout<<"Print number triangle pattern:"<<endl;
    for (int i = 1; i<=r; i++)
    {
        for (int j=1; j<=i; j++)
        {
            cout<<j;
        }
        
        cout<<endl;
    }
    return 0;
}