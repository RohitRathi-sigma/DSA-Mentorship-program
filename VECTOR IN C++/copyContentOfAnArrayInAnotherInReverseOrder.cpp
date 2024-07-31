#include <iostream>
using namespace std;
int main()
{
    int originalarr[100], size;
    cout << "Enter the size of array :";
    cin >> size;
    cout << "Enter the elements of array :";
    for (int i = 0; i < size; i++)
    {
        cin >> originalarr[i];
    }
    int reversearr[100];
    for (int i = 0; i < size; i++) // Copy the contents of the original array into the reversed array in reverse order
    {
        reversearr[i] = originalarr[size - 1 - i];
    }
    cout << "The original array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << originalarr[i] << " ";
    }
    cout << endl;
    cout << "The reversed array are : ";
    for (int i = 0; i < size; i++)
    {
        cout << reversearr[i] << " ";
    }
    return 0;
}