//Print index of a given element in an array. If not present, print -1.

#include<iostream>
using namespace std;
int findIndex(int arr[], int n, int x, int idx){
    //base case
    if(idx==n)
       return -1;
    //process
    if(arr[idx]==x)
       return idx;
    //recursive relation
    findIndex(arr, n, x, idx+1);
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"Enter the value to find:";
    cin>>x;
    int result= findIndex(arr, n, x, 0);
    if(result!=-1){
        cout<<"Element found at index: "<<result<<endl;
    }
    else{
        cout<<"Element not found: "<< -1<<endl;
    }
    return 0;
}