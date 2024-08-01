//Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’

#include <iostream>
#include <string>
#include <climits> // For INT_MIN
using namespace std;

int main() {
    string s;
    cout << "Enter a string of digits: ";
    getline(cin,s);

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (char c : s) {
        int digit = c - '0'; // Convert char to int

        if (digit > largest) {
            secondLargest = largest; // Update second largest before largest
            largest = digit;
        } else if (digit > secondLargest && digit < largest) {
            secondLargest = digit;
        }
    }

    if (secondLargest == INT_MIN) {
        cout << "There is no second largest digit." << endl;
    } else {
        cout << "The second largest digit is: " << secondLargest << endl;
    }

    return 0;
}
