//If an array arr contains n elements, then check if the given array is a palindrome or not
#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n / 2; ++i) {
        if (arr[i] != arr[n - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr1 = {1, 2, 3,3, 2, 1};
    vector<int> arr2 = {1, 2, 3, 4, 5};

    cout << "arr1 is " << (isPalindrome(arr1) ? "a palindrome" : "not a palindrome") << endl;
    cout << "arr2 is " << (isPalindrome(arr2) ? "a palindrome" : "not a palindrome") << endl;

    return 0;
}
