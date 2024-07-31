// Find the element x in the array . Take array and x as input

#include <iostream>
using namespace std;
int main()
{
    int n, x;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Enter the element of array : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to find : ";
    cin >> x;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            cout << "Element is found ." << endl;
            break;
        }
        else
        {
            cout << "Element is not in array ." << endl;
            break;
        }
    }

    return 0;
}