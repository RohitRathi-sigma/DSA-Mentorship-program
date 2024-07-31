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
    int min_value = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] >= min_value || arr[i] <= min_value)
        {
            min_value = arr[i];
        }
    }
    cout << "The minimum value in array is :" << min_value << endl;
    return 0;
}