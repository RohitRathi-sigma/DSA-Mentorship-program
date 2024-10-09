// A person want to reach to his home but he is 1km away from his house and he start walking.

#include<iostream>
using namespace std;

     void reachHome(int src,int dest){

        cout<<"Source "<<src <<"  Destination "<< dest<<endl;
        //base case(End stage)
        if(src==dest){
            cout<<"Reach home."<<endl;
            return;
        }

        //processing - Move one next step
        src++;

        //recursivr call/relation
        reachHome(src,dest);
     }

int main(){
    int dest=5;   //dest=Destination
    int src=1;     //src=Source

    cout<<endl;
    reachHome(src,dest);

    return 0;
}