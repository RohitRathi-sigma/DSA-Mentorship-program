// Program to convert a decimal number to binary.

#include <iostream>
using namespace std;

void decimalToBinary(int n) {
    // Base case
    if (n == 0) {
        return;
    }
    // Recursive call
    decimalToBinary(n / 2);
    // Print the remainder after returning from the recursive call
    cout << n % 2;
}

int main() {
    int num;
    cout << "Enter a decimal number: ";
    cin >> num;
    if (num == 0) {
        cout << "Binary representation: 0" << endl;
    } else {
        cout << "Binary representation: ";
        decimalToBinary(num);
        cout << endl;
    }
    return 0;
}