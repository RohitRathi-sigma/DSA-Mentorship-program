//Write a recursive function to reverse a number. Avoid preceding 0s in the reversed number.

#include <iostream>
using namespace std;
int reverseNumber(int num, int rev = 0) {
    // Base case
    if (num == 0) {
        return rev;
    }
    
    // Recursive case/process
    rev = rev * 10 + num % 10;
    
    //recursively call
    return reverseNumber(num / 10, rev);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    if (num == 0) {
        cout << "Reversed Number: 0" << endl;
    } else {
        int reversed = reverseNumber(num);
        cout << "Reversed Number: " << reversed << endl;
    }
    
    return 0;
}