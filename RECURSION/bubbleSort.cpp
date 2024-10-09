#include<iostream>
using namespace std;
void sortArray(int arr[], int n){
    //base case
    if(n==0 || n==1) return;
    //process
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    //recursive call 
    sortArray(arr,n-1);
}
int main(){
    int arr[5]={1,2,8,4,5};
    sortArray(arr, 5); 
    cout<<"Sorted array:";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}