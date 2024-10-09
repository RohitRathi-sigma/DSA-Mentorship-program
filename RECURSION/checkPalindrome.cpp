//WAP to check wether the given string is Palindrome or not using recursion.

#include<iostream>
using namespace std;
bool checkPalindrome(string str,int i,int j){
    //base case
    if(i>j) return true;

    if(str[i]!=str[j]){
        return false;
    }
    else{
        //recursive call
        return checkPalindrome (str,i+1,j-1);
    }
}
int main(){
    string str="NITIN";
    cout<<endl;

    bool isPalindrome=checkPalindrome(str, 0, str.length()-1);

    if(isPalindrome){
        cout<<"String is palindrome."<<endl;
    }
    else{
        cout<<"String is not palindrome."<<endl;
    }
}