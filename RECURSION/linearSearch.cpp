//WAP to check wether the given number is present in array or not using linear search.

#include<iostream>
using namespace std;
bool  linearSearch(int arr[], int n, int key){
    //base case
    if(n==0) return false;

    if(arr[0]==key) return true;
    else{
        bool remainingPart = linearSearch(arr+1, n-1, key);
        return remainingPart;
    }
}
int main(){
    int arr[]={1,8,3,4,9,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int key =8 ;
    bool ans =linearSearch(arr, n, key);
    if(ans){
        cout<<"Present."<<endl;
    }
    else{
        cout<<"Not present."<<endl;
    }
    return 0;
}