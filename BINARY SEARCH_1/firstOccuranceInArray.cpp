//WAP to clculate the first occurance of x in the given array using binary search method.

#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 5, 5, 7, 8, 1, 2, 9}; 
    int n = sizeof(arr) / sizeof(arr[0]);
    cout<<"Size of array:"<<n<<endl;
    int target = 9; 
    int firstOccurrence = -1; 
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            firstOccurrence = mid;
            right = mid - 1;
        } 
        else if (arr[mid] < target) {
            left = mid + 1; 
        }
        else {
            right = mid - 1;
        }
    }

    if (firstOccurrence != -1) {
        cout << "First occurrence of element " << target << " is at index: " << firstOccurrence << endl;
    } else {
        cout << "Element " << target << " not found in the array." << endl;
    }

    return 0;
}