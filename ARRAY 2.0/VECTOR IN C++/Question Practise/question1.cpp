// Find the last occurrence of x in the array.

#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int arr[] = {1, 2, 3, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int x = 2;
    int lastindex = -1;
    // Loop through the array from the end to the beginning.
    for (int i = size - 1; i >= 0; i--)
    {
        if (arr[i] == x)
        {
            lastindex = i;
            break; // exit from loop after last occurrence found.
        }
    }
    if (lastindex != -1)
    {
        cout << "The last occurrence of " << x << " is at index " << lastindex << endl;
    }
    else
    {
        cout << x << " is not found." << endl;
    }

    return 0;
}