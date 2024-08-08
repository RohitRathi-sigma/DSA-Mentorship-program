#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(v[j]<v[minindex]){
                minindex=j;
            }
        }
        swap(v[i],v[minindex]);
    }
}

int main(){
    vector<int> v={44,33,55,22,11};
    selectionsort(v);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
}