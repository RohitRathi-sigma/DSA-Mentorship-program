/*Given an unsorted array arr[] of n integers and a key which is present in this array. You need to write a program to find the start index( index where the element is first found from left in the array ) and end index( index where the element is first found from right in the array**

**Given a stream of incoming numbers, find average or mean of the stream at every point.*/

#include<iostream>
using namespace std;
int main()
{
    int arr[5]={10,20,30,40,50};
    int sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
        cout<<sum/(i+1)<<endl;
    }


    return 0;
}