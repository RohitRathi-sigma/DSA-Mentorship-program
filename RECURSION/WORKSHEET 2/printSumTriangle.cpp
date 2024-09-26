
#include<iostream>
using namespace std;
void sumTriangle(int arr[], int n){
    //base case
    if(n<1) return;
    //process
    cout<<"[";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << "]" << endl;
    int nextLevel[n-1];
    for(int i=0;i<n-1;i++){
        nextLevel[i]=arr[i]+arr[i+1];
    }
    //recursive relation
    sumTriangle(nextLevel, n-1);
 }

int main(){
    int arr[]={1,2,3,4,5,};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Sum triangle:"<<endl;
    sumTriangle(arr, n);
}