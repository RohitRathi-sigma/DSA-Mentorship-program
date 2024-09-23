//WAP to print the elements of an array using recursion.

#include <iostream>
using namespace std;
void display(int arr[],int n,int idx){
    //base case
    if(idx==n) return;
    //process
    cout<<arr[idx]<<" ";
    //recursive relation
    display(arr,n,idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    display(arr , n , 0);
}