//Given an array of strings. Check whether they are anagram or not.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main() {
   vector<string> strings = {"Alpha", "ahlpA", "alhpA"};

    if (strings.empty()) {
        cout << "All strings are anagrams of each other." << endl;
        return 0;
    }

    string sortedStr = strings[0];
    sort(sortedStr.begin(), sortedStr.end());

    bool areAnagrams = true;

    
    for (size_t i = 1; i < strings.size(); ++i) {
       string current = strings[i];
       sort(current.begin(), current.end());

        if (current != sortedStr) {
            areAnagrams = false;
            break;
        }
    }

    if (areAnagrams) {
       cout << "All strings are anagrams of each other." << endl;
    }
    else {
        cout << "Strings are not anagrams of each other." << endl;
    }

    return 0;
}
