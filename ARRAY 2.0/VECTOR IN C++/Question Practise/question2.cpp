// Find the doublet in the Array whose sum is equal to the given value x. (LeetCode - 1) (Two Sum)

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array : " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "Enter the sum of two elements : ";
    cin >> x;
    bool found = false;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                cout << "Pair found : (" << arr[i] << " , " << arr[j] << " )" << endl;
                found = true;
                break;
            }
        }
    }
    if (!found)
    {
        cout << "No pair found with sum " << x << endl;
    }

    return 0;
}