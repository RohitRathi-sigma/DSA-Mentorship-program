// Given a positive integer, return true if it is a power of 2. 

#include <iostream>
using namespace std;
bool isPowerOfTwo(int n){
    //base case 
    if(n==1)  return true;

    //Process
    if(n<=0 || n%2!=0) return false;

    //Recursive relation
    return isPowerOfTwo(n/2);
}

int main(){
    int num;
    cout<<"Enter the number:";
    cin>>num;
    if(isPowerOfTwo(num)){
        cout<<num<<" is a power of 2."<< endl;
    }
    else{
        cout<<num<<" is not a power of 2."<<endl;
    }
    return 0;
}