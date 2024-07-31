//Find the diff betweeen the sum of elements of even index to the elements of odd index.
#include <iostream>
#include <vector>
using namespace std;

int main(){
    int array[]={6,5,1,2,4,2};

    int anssum=0;
    cout<<"Diff b/w the odd and even index element:";
    for(int i=0;i<6;i++){
        if(i%2==0){
            anssum+=array[i];
        }
        else{
            anssum-=array[i];
        }
    }
    cout<<anssum<<endl;
    
    return 0;
}