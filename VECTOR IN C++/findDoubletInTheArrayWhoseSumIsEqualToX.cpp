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
    cout << "Enter the value of x :";
    cin >> x;
    int doublet = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] + arr[j] == x)
            {
                doublet++;
            }
        }
    }
    cout << " Doublet in the Array whose sum is equal to " << x << " are : " << doublet << endl;

    return 0;
}