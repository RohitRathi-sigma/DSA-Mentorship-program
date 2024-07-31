//Sort the array of 0’s and 1’s.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortcolors(vector<int> &nums){
    int n=nums.size();
    int noz=0;
    int noo=0;
    
  for(int i=0;i<n;i++){
        if(nums[i]==0) noz++;
        else  noo++;
    }
//for filling
for(int i=0;i<n;i++){
    if(i<noz) nums[i]=0;
    else  nums[i]=1;
}
}
int main(){
     vector<int> nums; 
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(1);
    nums.push_back(0);
    nums.push_back(1);

    cout<<"Original array:";
    for(int i=0;i<nums.size();i++){
    cout<<nums[i]<<" ";
    }
    cout<<endl;

    sortcolors(nums);
    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}
