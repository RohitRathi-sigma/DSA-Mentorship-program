//WAP to remove a charecter from a string .

#include<iostream>
#include<string>
using namespace std;
void removeChar(string ans, string original){
    //base case
    if(original.length()==0){
        cout<<ans;
        return;
    }
char ch=original[0];
if(ch=='o') removeChar(ans,original.substr(1));
else removeChar(ans+ch, original.substr(1));
}
int main(){
    string str="i love you";
    removeChar(" ", str);
}