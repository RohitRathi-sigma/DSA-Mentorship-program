//WAP to calculate the sum of number from 1 to N using parameters.

#include<iostream>
using namespace std;
void sum1ToN(int sum , int n){
    //base case
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    //recursive relation
    sum1ToN(sum+n,n-1);
}
int main(){
    sum1ToN(0,8);
}