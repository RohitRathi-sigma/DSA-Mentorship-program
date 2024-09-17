// Print the number 'n' by using tail recursion or had recursion.
#include <iostream>
using namespace std;


//Tail recursion=some process and then relation
void print(int n){
    //base case 
    if(n==0){
        return;
    }
    cout<< n<<endl;   //Some process 
    //Recursive relation
    print(n-1);
}

//Head recursion =relation and then some process 
void print1(int n){
    //base case 
    if(n==0){
        return;
    }
    // Recursive relation
    print1(n-1);
    cout<<n<<endl;     //Some process 

}

int main(){

    int n;
    cout<< "Enter the number of term: ";
    cin>>n;
    
    cout<<"Using tail recursion:"<<endl;
    print (n);
    cout<<"Using head recursion:"<<endl;
    print1(n);

    return 0;
}