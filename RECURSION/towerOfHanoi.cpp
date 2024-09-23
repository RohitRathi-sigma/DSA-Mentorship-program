//WAP to calculate the number of ways to move disc from A to C.

#include<iostream>
using namespace std;
void hanoi(int n,char A,char B,char C){
    //base case
    if(n==0) return ;

    hanoi(n-1,A,C,B);
    cout<<A <<"->" << C <<endl;
    hanoi(n-1,B,A,C);
}

int main(){
    int n;
    cout<<"Enter the number of disc: ";
    cin>>n;
    hanoi(n,'A','B','C');
}
//Minimum no of way to move disc is = (2^n-1).