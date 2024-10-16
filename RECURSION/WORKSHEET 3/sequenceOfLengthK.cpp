// Print all the increasing sequences of length k from first n natural numbers. 

#include <iostream>
using namespace std;

void printSequences(int n, int k, int sequence[], int index, int start) {
    //base case
    if (index == k) {
        for (int i = 0; i < k; ++i)
            cout << sequence[i] << " ";
        cout << endl;
        return;
    }
    // process
    for (int i = start; i <= n; ++i) {
        sequence[index] = i; 
        //recursive call
        printSequences(n, k, sequence, index + 1, i + 1);  
    }
}

int main() {
    int n, k;
    cout << "Enter the value of n (first n natural numbers): ";
    cin >> n;
    cout << "Enter the value of k (length of sequences): ";
    cin >> k;

    int sequence[k];              // Array to store the sequence of length k
    printSequences(n, k, sequence, 0, 1);

    return 0;
}