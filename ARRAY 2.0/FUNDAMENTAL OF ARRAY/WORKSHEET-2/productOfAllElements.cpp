//calculate the product of all the elements
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of array : "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int product=1;
    for(int i=0;i<n;i++)
    {
        product =product*arr[i];

    }
    cout<<"product of all the elements is : "<<product;

    return 0;
}