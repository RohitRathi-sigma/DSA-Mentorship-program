//Input a string and concatenate with its reverse string and print it.

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cout << "Enter a string: ";
    getline(cin, s);

    string reversed = " ";

    for (int i = s.length() - 1; i >= 0; i--) {
        reversed += s[i];
    }

    string concatenated = s + reversed;   // Concatenate the original string with its reverse

    cout << "Concatenated string: " << concatenated << std::endl;

    return 0;
}
