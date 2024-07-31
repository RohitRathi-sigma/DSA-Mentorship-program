// Change the second element of the array arr to 25 and print the updated array.

#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 34, 56, 76, 86};
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    arr[1] = 25;
    cout << "Updated array is :" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}