//WAP to check wether the given array is sotred or not.

#include<iostream>
using namespace std;
bool isSorted(int arr[], int n){
    //base case
    if(n==0 || n==1) return true;

    if(arr[0]>arr[1])  return false;
    else{
        bool remainingPart =isSorted(arr+1, n-1);
        return remainingPart;
    }
}
int main(){
    int arr[]={1,2,5,2,3};
    int n=sizeof(arr)/sizeof(arr[0]);

    bool ans=isSorted(arr, n);
    if(ans){
        cout<<"Array is sorted."<<endl;
    }
    else{
        cout<<"Array is not sorted.";
    }
}