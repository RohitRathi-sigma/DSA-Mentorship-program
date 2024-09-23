//WAP to calculate the nth fibonacci number using recursion.

#include <iostream>
using namespace std;
int fibo(int n){
    //base case
    if(n==1 || n==2) return 1;

    //recursive relation 
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    cout<<"Enter the term:";
    cin>>n;
    cout<<"The "<< n << "th fibonacci number is: "<<fibo(n);
}