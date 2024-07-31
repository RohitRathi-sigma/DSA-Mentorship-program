//Count the number of elements strictly greater than x.
#include <iostream>
#include <vector>
using namespace std;

int count(vector<int>& vec, int x) {
    int count = 0;
    for (int num : vec) {
        if (num > x) {
            count++;
        }
    }
    return count;
}
int main() {
    vector<int> vec;
    int n, x, input;

    cout << "Enter the number of elements in the vector: ";
    cin >> n;

    cout << "Enter the elements of the vector:\n";
    for (int i = 0; i < n; ++i) {
        cin >> input;
        vec.push_back(input);
    }

    cout << "Enter the value of x: ";
    cin >> x;

    int result = count(vec, x);
    cout << "Number of elements greater than " << x << " is: " << result << endl;

    return 0;
}
