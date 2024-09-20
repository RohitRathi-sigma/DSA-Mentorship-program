// WAP to say the digits.Exa- Input:421;Output:Four Two One.

#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case
    if(n==0)
    return;

    //processing
    int digit=n%10;
    n=n/10;
    //cout<<arr[digit]<<" ";  // It give the opposit/reverse output as the number is divided into part from end.

    //recursive call/relation
    sayDigit(n, arr);
    cout<<arr[digit]<<" ";    //Correct output. 
} 

int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};

    int n;
    cout<<"Enter the number:";
    cin >>n;
    cout<<endl;
    sayDigit(n,arr);
   

    return 0;
}