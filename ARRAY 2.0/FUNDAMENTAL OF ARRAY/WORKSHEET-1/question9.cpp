// Write a program that prints all elements of an array int arr[4] = {5, 10, 15, 20};

#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {5, 10, 15, 20};
    cout << "Elements of array is : ";
    for (int i = 0; i < 4; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}