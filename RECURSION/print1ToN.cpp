//WAP to print number from 1 to N.

#include <iostream>
using namespace std;
void print(int a ,int b){
    //base case
    if(a>b) return ;
    
    //some process
    cout<<a<<endl;

    //recursive relation
    print(a+1,b);
}
int main(){
    print(2,6);
}