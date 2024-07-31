// Implement a program that initializes an empty vector of integers. Use a loop to add the numbers from 1 to 10 to the vector using push_back.After each addition, print the current size and capacity of the vector.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // initializes an empty vector
    vector<int> myvector;
    // Loop to add numbers from 1 to 10 to the vector
    for (int i = 1; i <= 10; i++)
    {
        myvector.push_back(i);
        // Print the current size and capacity of the vector
        cout << "After adding " << i << " : " << endl;
        cout << "Current size = " << myvector.size() << " , " << endl;
        cout << "Current capacity = " << myvector.capacity() << " , " << endl;
    }
    return 0;
}