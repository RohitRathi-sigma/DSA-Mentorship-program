#include<iostream>
using namespace std;
int main()
{
    int r=4;
    int c=4;
    char alphabet='A';
    cout<<"Print alphabet square pattern:"<<endl;
    for (int i = 1; i<=r; i++)
    {
        char a=alphabet;
        for (int j=1; j<=c; j++)
        {
            cout<<a;
            a++;
        }
        
        cout<<endl;
    }
    return 0;
}