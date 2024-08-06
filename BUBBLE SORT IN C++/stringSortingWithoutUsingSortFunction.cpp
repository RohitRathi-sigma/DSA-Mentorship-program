// String sorting without using sort function.
#include <iostream>
#include <string>
using namespace std;

int main() {
    string str = "I LOVE YOU";
    cout << "Original string: " << str << endl;

    int n = str.length();

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (str[j] > str[j + 1]) {
                char temp = str[j];   // Swap the characters
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
    }
    cout << "Sorted string: "<< str <<endl;

    return 0;
}
