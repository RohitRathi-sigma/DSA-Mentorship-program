#include<iostream>
using namespace std;
int main()
{
    int l,b;
    cout<<"enter the length :";
    cin>>l;
    cout<<"enter the breadth :";
    cin>>b;
    float area = (l*b); 
    float perameter = (2*(l+b));
    cout<<"area of rectangle is :"<<area<<endl;
    cout<<"perametr of rectangle is : "<<perameter<<endl;
    if (area>perameter)
    {
        cout<<"area is greater than perameter of rectangle.";
    }
    else{
        cout<<"area is not greater than perameter of rectangle.";
    }
    return 0;
    
}
