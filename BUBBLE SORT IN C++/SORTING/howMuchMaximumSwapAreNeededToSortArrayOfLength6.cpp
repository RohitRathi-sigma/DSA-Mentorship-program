#include <iostream>
using namespace std;
int main()
{
    int arr[100], s;
    cout << "Enter the size of array : ";
    cin >> s;
    cout << "Enter the elements of array : ";
    for (int i = 0; i < s; i++)
    {
        cin >> arr[i];
    }
    bool sorted = true;
    for (int i = 0; i < s - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            sorted = false;
            break;
        }
    }
    if (sorted)
    {
        cout << "Array is sorted." << endl;
    }
    else
    {
        ;
        cout << "Array is not sorted." << endl;
    }
    int maxSwaps = 0;
    for (int i = 1; i <= s; i++)
    {
        maxSwaps += (s - i);
    }

    cout << "Maximum swaps needed to sort array of length 6: " << maxSwaps << endl;

    return 0;
}