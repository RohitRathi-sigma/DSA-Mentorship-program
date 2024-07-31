//Sort the array of 0’s, 1’s and 2’s.
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortcolors(vector<int> &nums){
    int n=nums.size();
    int noz=0;
    int noo=0;
    int notw=0;
    
  for(int i=0;i<n;i++){
        if(nums[i]==0) noz++;
        else if(nums[i]==1) noo++;
        else notw++;
    }
//for filling
for(int i=0;i<n;i++){
    if(i<noz) nums[i]=0;
    else if(i<(noz+noo)) nums[i]=1;
    else nums[i]=2;
}
}
int main(){
     vector<int> nums = {2, 0, 2, 1, 1, 0};

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