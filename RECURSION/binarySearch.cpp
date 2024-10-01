//WAP to check wether the given number is present or not using binary search .

#include<iostream>
using namespace std;
bool  binarySearch(int arr[], int s, int e, int key){
    //base case
    if(s>e) return false;

    int mid= s+(e-s)/2;
    if(arr[mid]==key) return true;

    if(arr[mid]<key){
        return binarySearch(arr,mid+1,e,key);
    }
    else{
        return binarySearch(arr,s,mid-1,key);
    }
}
int main(){
    int arr[]={2,4,6,10,14,16,19};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key =18 ;
    cout<<"Present or not (0 for not present & 1 for present) : "<<binarySearch(arr,0,6,18)<<endl;
    return 0;
}