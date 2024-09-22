//WAP to calculate the sum of odd number between a and b.

#include<iostream>
using namespace std;

int sumOdd(int a , int b){
    //base case
    if(a>b) return 0;

    //process
    if(a%2==0) 
       a++;

    //recursive relation
    return a+sumOdd(a+2,b);
}
int main(){
    int a,b;
    cout<<"Enter the two numbers(a and b):";
    cin>>a>>b;
    cout<<"The sum of odd number b/w "<< a <<" and "<< b <<" is: "<<sumOdd(a,b)<<endl;
    return 0;
}