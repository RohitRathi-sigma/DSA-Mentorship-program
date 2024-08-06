// Optimized bubble sorting of array. Note:Means stop to compare the element after the are in the form of sort.
#include <iostream>
#include<algorithm>
using namespace std;

int main(){
    int arr[9]={8,9,4,2,3,7,6,5,1};
    int n=9;
    for(int i=0;i<n-1;i++){
        bool flag=true;    //sorted
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            flag=false;
            }
        }
        if(flag==true){   //having no swaping
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}