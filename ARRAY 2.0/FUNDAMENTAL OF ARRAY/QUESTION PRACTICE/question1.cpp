// Given an array of marks of students, if the mark of any student is less than 35 print its roll number. [roll number here refers to the index of the array.
#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the size of array : " << endl;
    cin >> n;
    int arr[n];
    cout << "Marks of student are : " << endl;
    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < 35)
        {
            cout << "Roll number: " << i << " has marks less than 35." << endl;
        }
    }

    return 0;
}