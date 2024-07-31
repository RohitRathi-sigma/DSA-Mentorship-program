//Implement a program that takes n integers as input from the user, stores them in a vector, and sorts the vector in ascending order using the sort function.

#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
using namespace std;

int main() {
    vector<int> vec;  // Declare a vector to store the integers

    int n;     // Get the number of integers to be inputted
    cout << "Enter the number of integers: ";
    cin >> n;

    cout << "Enter the integers: ";      
    for (int i = 0; i < n; ++i) {
        int value;
        cin >> value;
        vec.push_back(value);
    }
    
    // Sort the vector in ascending order
    sort(vec.begin(), vec.end());

    // Print the sorted vector
    cout << "Sorted integers: ";
    for (int i = 0; i < vec.size(); ++i) {
        cout << vec[i] << " ";
    }

    return 0;
}
