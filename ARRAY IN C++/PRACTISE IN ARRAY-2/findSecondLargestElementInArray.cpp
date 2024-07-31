#include <iostream>
using namespace std;
int main()
{
    int arr[100], size;
    cout << "Enter the size of array :";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int l = arr[0];  // l stand for largest
    int sl = arr[0]; // sl stand for second largest
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > l)
        {
            sl = l;
            l = arr[i];
        }
        else if (arr[i] > sl && arr[i] < l)
        {
            sl = arr[i];
        }
    }
    cout << "Second largest elements in array is " << sl << endl;
    return 0;
}