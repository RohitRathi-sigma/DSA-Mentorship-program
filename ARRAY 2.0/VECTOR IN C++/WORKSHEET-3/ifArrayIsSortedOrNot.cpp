//check if the array is sorted or not.
#include <iostream>
#include <vector>
using namespace std;

int main(){

    int array[]={1,6,5,3,4,7};

    bool sortedflag=true;
    for(int i=0;i<6;i++){
        if(array[i]<array[i-1]){
            sortedflag=false; 

        }
    }
    cout<<sortedflag<<endl;

    return 0;
}