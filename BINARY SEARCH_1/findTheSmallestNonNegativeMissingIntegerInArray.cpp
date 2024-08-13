//Given an sorted array  of non negative distinct integer ,find the smallest missing non negative integer.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 4, 5, 6, 7, 8, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]); 
    
    int left = 0, right = n - 1;
    int missing = n; 
    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == mid) {
            left = mid + 1;
        } 
        else {
            missing = mid;
            right = mid - 1;
        }
    }

    cout << "The smallest missing non-negative integer is: " << missing << endl;

    return 0;
}