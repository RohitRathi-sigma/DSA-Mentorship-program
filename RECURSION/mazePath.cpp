//WAP in which a rat is at a point on a table/matrix and he want to change his position in such a way that he can only use direction as right , left , down .Then find the no. of ways that he can reach his destination.

#include <iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){    //sr=starting row , sc=starting col ,  er=ending row , ec=ending col
    if(sr>er ||sc>ec)  return 0;
    if(sr==er ||sc==ec)  return 1;
    int rightmaze=maze(sr,sc+1,er,ec);
    int downmaze=maze(sr+1,sc,er,ec);
    int totalways=rightmaze+downmaze;
    return totalways;
}
int main(){
    cout<<maze(0,0,1,2);
}