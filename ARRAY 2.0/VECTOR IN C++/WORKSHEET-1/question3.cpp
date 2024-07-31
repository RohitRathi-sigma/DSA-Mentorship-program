// Write a program that takes n integers as input from the user and stores them in a vector.Print the vector using a loop

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of integers : ";
    cin >> n;
    cout << "Enter the integers : " << endl;
    vector<int> myvector(n);
    for (int i = 0; i < n; i++)
    {
        cin >> myvector[i];
    }
    // print the vector
    cout << "Vector contains : " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << myvector[i] << " ";
    }

    return 0;
}