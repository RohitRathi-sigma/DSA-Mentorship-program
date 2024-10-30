//WAP to calculate the power of a number as a^b.

#include<iostream>
using namespace std;
int power(int a, int b){
    //base case
    if(b==0) return 1;
    if(b==1) return a;
    
    //recursive call
    int ans =power(a,b/2);
    //b is even
    if(b%2==0){
        return ans*ans;
    }
    else{
        //b is odd
        return a*ans*ans;
    }
 }
int main(){
    int a,b;
    cout<<"Enter the value of a & b:";
    cin>> a >> b;
    int ans=power(a,b);
    cout<< "Answer is "<<ans  <<endl;
}