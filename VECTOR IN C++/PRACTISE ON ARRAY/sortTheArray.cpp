#include <iostream>
#include <vector>
using namespace std;
void sortZeroesAndOnes(vector<int> &v)
{
    int Zeroes_count = 0;
    for (int ele : v)
    {
        if (ele == 0)
        {
            Zeroes_count++;
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < Zeroes_count)
        {
            v[i] = 0;
        }
        else
        {
            v[i] = 1;
        }
    }
}
int main()
{
    int ele, size;
    cout << "Enter the size of vector :";
    cin >> size;
    vector<int> v;
    cout << "Enter the elements in 0's and 1's : ";
    for (int i = 0; i < size; i++)
    {
        cin >> ele;
        v.push_back(ele);
    }
    sortZeroesAndOnes(v);
    cout << "The sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}