#include <iostream>
using namespace std;
int main()
{
    int arr[100], size, x;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the array elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search :";
    cin >> x;
    bool found = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] = x)
        {
            found = true;
            cout << "Element " << x << " is found at index" << endl;
            break;
        }
    }
    if (!found)
    {
        cout << "Element" << x << " is not found at index" << endl;
    }
    return 0;
}