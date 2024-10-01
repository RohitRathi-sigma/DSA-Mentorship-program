//WAP to calculate the sum of the elements of an array using recursion.

#include<iostream>
using namespace std;
int getSum(int arr[], int n){
    //base case
    if(n==0) return 0;
    if (n==1) return arr[0];

    int remainingPart=getSum(arr+1, n-1);
    int sum=arr[0]+remainingPart;
    return sum;
}
int main(){
    int arr[]={1,8,3,4,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum = getSum(arr, n);
    cout<<"Sum is: "<< sum <<endl;
    return 0;
}