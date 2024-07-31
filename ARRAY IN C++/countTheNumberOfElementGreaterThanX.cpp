#include <iostream>
using namespace std;
int main()
{
    int arr[100], size, x;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number 'x' :";
    cin >> x;
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
        {
            count++;
        }
    }

    cout << count << " elements is grater than " << x << " in array ." << endl;
    return 0;
}