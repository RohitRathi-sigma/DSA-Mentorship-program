// Write a program that initializes a vector of integers with values {1, 2, 3, 4, 5}. Use the push_back function to add the value 6 to the vector. Then use the pop_back function to remove the last element.Print the final vector to verify the operations.

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    // Initialize a vector
    vector<int> myvector = {1, 2, 3, 4, 5};
    // Use push_back to add the value 6 to the vector
    myvector.push_back(6);
    // updated vector after push-back()
    cout << "Vector after to add the value 6 into the vector : " << endl;
    for (int num : myvector)
    {
        cout << num << " ";
    }
    cout << endl;

    // Use pop_back to remove the last element
    myvector.pop_back();
    // Print the final vector to verify the operations
    cout << "Final vector is : " << endl;
    for (int num : myvector)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}