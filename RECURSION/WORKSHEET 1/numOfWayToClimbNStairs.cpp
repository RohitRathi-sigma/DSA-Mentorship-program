//Calculate the number of ways in which a person can climb n stairs if he can take exactly 1,2 or 3 steps at each level.

#include <iostream>
using namespace std;
int countWays(int n){
    //base case 
    if(n==0)  return 1;

    //Process
    if(n<0) return 0;

    //Recursive relation
    return countWays(n-1)+countWays(n-2)+countWays(n-3);
}
int main(){
    int n;
    cout<<"Enter the number of stairs:";
    cin>>n;
    cout<<"Numbers of way to climb "<< n <<" stairs:"<<countWays(n)<<endl;
    
    return 0;
}