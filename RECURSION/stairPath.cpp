//WAP to calcuate the number of ways to climb the stairs when he cam move only 1 ,2 stairs or its combination at one move .

#include <iostream>
using namespace std;
int countWays(int n){
    //base case
    if(n==0 || n==1) return 1;

    //process 
    if(n<0) return 0;
    
    //recursive relation
    return countWays(n-1)+countWays(n-2);
}
int main(){
    int n ;
    cout<<"Enter the number of stairs :";
    cin>>n;
    cout<<"Number of ways to climb "<< n <<" stairs is: "<<countWays(n);
}
    
