//WAP to reverse the given string using recursion.

#include<iostream>
using namespace std;
void reverse(string &str,int i, int j){
    cout<<"call recieved for  "<< str <<endl;  //print method to know each step occured in it.

    //base case
    if(i>j) return;
    swap(str[i],str[j]);
    i++,
    j--;
    //Recursivr call
    reverse(str,i,j);
}
int main(){
    string str="Gupta";
    cout<<"Original string :"<<str<<endl;
    cout<<endl;
    reverse (str,0,str.length()-1);
    cout<<endl;
    cout<<"Reversed string :";
    cout<< str <<endl;
}