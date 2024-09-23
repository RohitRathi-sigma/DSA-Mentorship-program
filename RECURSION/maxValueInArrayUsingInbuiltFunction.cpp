//WAP to calculate the max value in the array using inbuilt function in recursion.

#include<iostream>
using namespace std;
int INT_MIN;
int maxInArray(int arr[],int n,int idx){
    //base case
    if(idx==n) return INT_MIN;
    return max(arr[idx],maxInArray(arr, n, idx+1));
    }
int main(){
    int arr[]={1,5,8,22,7,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<< maxInArray(arr, n, 0);
}