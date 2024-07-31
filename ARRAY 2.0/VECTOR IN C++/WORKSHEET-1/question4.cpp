// Create a program that initializes a vector with some values. Use a for loop to print all the elements of the vector

#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Initialize a vector with some values
    vector<int> vec = {10, 20, 30, 40, 50};

    // Loop to print all the elements of the vector
    cout << "Elements of the vector: ";
    for (int i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " ";
    }

    return 0;
}
