#include<iostream>
using namespace std;
int main()
{
    double p,r,t,si;
    cout<<"enter the value of principle :";
    cin>>p;
    cout<<"enter the value of rate :";
    cin>>r;
    cout<<"enter the value of time :";
    cin>>t;
    si= (p*r*t)/100;
    cout<<"the simple interest is :"<<si<<endl;
    return 0;
}