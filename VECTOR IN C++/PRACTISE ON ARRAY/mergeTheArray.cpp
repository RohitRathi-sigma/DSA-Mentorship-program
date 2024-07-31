#include <iostream>
#include <vector>
using namespace std;

vector<int> mergeSortedArrays(vector<int> &arr1, vector<int> &arr2)
{
    vector<int> mergedArray;
    int i = 0, j = 0;

    // Merge arrays while both have elements remaining
    while (i < arr1.size() && j < arr2.size())
    {
        if (arr1[i] <= arr2[j])
        {
            mergedArray.push_back(arr1[i]);
            i++;
        }
        else
        {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    // Append remaining elements from arr1, if any
    while (i < arr1.size())
    {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    // Append remaining elements from arr2, if any
    while (j < arr2.size())
    {
        mergedArray.push_back(arr2[j]);
        j++;
    }

    return mergedArray;
}

int main()
{
    vector<int> arr1 = {1, 3, 5, 7, 9};
    vector<int> arr2 = {2, 4, 6, 8, 10};

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);

    cout << "Merged Sorted Array: ";
    for (int num : mergedArray)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}