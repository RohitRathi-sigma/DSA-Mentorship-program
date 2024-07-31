#include <iostream>
using namespace std;

int main()
{
    int arr[100], size, k;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout<<"Enter the array elements :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of steps to rotate: ";
    cin >> k;
    k = k % size;
    int temp[size];
    for (int i = 0; i < size; i++)
    {
        temp[(i + k) % size] = arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        arr[i] = temp[i];
    }
    cout << "Rotated Array: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}