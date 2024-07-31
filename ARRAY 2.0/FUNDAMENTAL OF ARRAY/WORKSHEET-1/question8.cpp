//  Write a program that takes 5 integers as input from the user and stores them in an array.


#include <iostream>
using namespace std;
int main()
{
    int arr[5];
    cout << "Enter the 5 element of array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}