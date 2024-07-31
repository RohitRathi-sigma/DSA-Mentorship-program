//Rotate the given array ‘a’ by k steps, where k is non-negative. 
//Note : k can be greater than n as well where n is the size of array ‘a’.
#include<iostream>
#include<vector>
using namespace std;
void rotate(int i,int j,vector<int> &v)
{
    while(i<=j)
    {
        int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
            j--;
    }

}
void display(vector<int> & v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(6);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(8);
    cout<<"orignal array is : ";
    display(v);
    int k;
    cout<<"\n enter the value of k : ";
    cin>>k;
    k=k%v.size();
    rotate(0,v.size()-k-1,v);
    rotate(v.size()-k,v.size()-1,v);
    rotate(0,v.size()-1,v);
    cout<<"rotated array is : ";
    display(v);
    return 0;

}