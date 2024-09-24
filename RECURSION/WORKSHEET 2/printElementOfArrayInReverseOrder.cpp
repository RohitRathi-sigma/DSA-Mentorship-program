//Print all the elements of an array in reverse order.

#include <iostream>
using namespace std;
void printReverse(int arr[],int n){
    //base case
    if(n==0) return;
    //process
    cout<<arr[n-1]<<" ";
    //recursive relation
    printReverse(arr,n-1);
}
int main(){
    int arr[]={1,2,3,4,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Revesed array: ";
    printReverse(arr , n );
}