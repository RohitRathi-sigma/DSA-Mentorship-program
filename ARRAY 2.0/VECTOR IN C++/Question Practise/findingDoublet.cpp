//: Find the doublet in the Array whose sum is equal to the given value x. (LeetCode - 1) (Two Sum)
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    v1.push_back(2);
    v1.push_back(4);
    v1.push_back(6);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);
    int target;
    cout<<"enter target value : ";
    cin>>target;
    cout<<"doublets are : ";
    for(int i=0;i<=v1.size()-1;i++)
    {
        for(int j=i+1;j<=v1.size();j++)
        {
            if(v1[i]+v1[j]==target)
            {
                cout<<"("<<v1[i]<<","<<v1[j]<<")"<<endl;
            }
        }
    }
    return 0;
}