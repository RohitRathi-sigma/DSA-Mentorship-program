//reverse an array partially
#include<iostream>
#include<vector>
using namespace std;
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
    v.push_back(2);
    int i1,i2;
    cout<<"enter index value from where to where you want to reverse : ";
    cin>>i1>>i2;
    cout<<"orignal array is : ";
    display(v);
    cout<<endl;
    int i=i1;
    int j=i2;
    while(i<=j)
    {
        int temp=v[j];
            v[j]=v[i];
            v[i]=temp;
            i++;
            j--;
    }

    cout<<"reversed array is : ";
    display(v);
    return 0;


}