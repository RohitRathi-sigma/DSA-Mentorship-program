// Write a program that declares an array of size 5, takes input from the user to fill the array, and prints the array elements in reverse order.//

#include <iostream>
using namespace std;
int main()
{
    // declare an array
    int arr[5];
    // take input from user
    cout << "Enter the element of array : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    // prints the array elements in reverse order
    cout << "Array elements in reverse order" << endl;

    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}