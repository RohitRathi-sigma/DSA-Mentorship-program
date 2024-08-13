//Given an sorted array  of non negative distinct integer ,find the smallest missing non negative integer using sum of elements method.
#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 2, 3, 5, 6, 7, 8,9};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int sumOfArray = 0;

    for (int i = 0; i < n; ++i) {
        sumOfArray += arr[i];
    }
    cout<<"sum Of Array:"<<sumOfArray<<endl;
    
    int expectedSum = (n * (n + 1)) / 2;
    cout<<"expected Sum:"<<expectedSum<<endl;

    int smallestMissing = expectedSum - sumOfArray;

    if (smallestMissing == n) {
        smallestMissing = n;
    }
    else {
        smallestMissing = n;
        for (int i = 0; i < n; ++i) {
            if (arr[i] != i) {
                smallestMissing = i;
                break;
            }
        }
    }

    cout << "The smallest missing non-negative integer is: " << smallestMissing << endl;

    return 0;
}
