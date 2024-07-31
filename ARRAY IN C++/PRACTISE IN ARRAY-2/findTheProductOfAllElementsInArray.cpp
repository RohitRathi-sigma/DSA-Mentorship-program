#include <iostream>
using namespace std;
int main()
{
    int arr[100], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int product = 1;
    for (int i = 0; i < size; i++)
    {
        product *= arr[i];
    }
    cout << "Product of all elements of array is " << product << endl;
    return 0;
}