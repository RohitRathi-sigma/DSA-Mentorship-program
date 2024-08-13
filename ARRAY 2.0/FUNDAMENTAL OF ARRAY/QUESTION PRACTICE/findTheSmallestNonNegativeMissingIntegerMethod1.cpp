//Given an sorted array  of non negative distinct integer ,find the smallest missing non negative integer .
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 4, 5, 6, 7, 8, 10}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    int missing = n; 

    for (int i = 0; i < n; ++i) {
        if (arr[i] != i) {
            missing = i;
            break;    // Exit the loop once the first missing number is found
        }
    }
    cout << "The smallest missing non-negative integer is: " << missing << endl;

    return 0;
}
