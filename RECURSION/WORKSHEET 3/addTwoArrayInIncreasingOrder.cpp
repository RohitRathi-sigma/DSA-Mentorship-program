//  Given two sorted arrays A and B, generate all possible arrays such that the first element is taken from A then from B then from A, and so on in increasing order till the arrays are exhausted. The generated arrays should end with an element from B. A = {10, 15, 25}  B = {1, 5, 20, 30} Output: {10 20}, {10 20 25 30}, {10 30}, {15 20}, {15 20 25 30}, {15 30}, {25 30}


#include <iostream>
using namespace std;

void generateSequences(int A[], int B[], int C[], int n, int m, int i, int j, int len, bool fromA) {
    if (fromA) {
        for (int k = i; k < n; k++) {
            C[len] = A[k];  
            generateSequences(A, B, C, n, m, k + 1, j, len + 1, false); 
        }
    } else {
        for (int l = j; l < m; l++) {
            if (B[l] > C[len - 1]) {  
                C[len] = B[l];  
                for (int p = 0; p <= len; p++)
                    cout << C[p] << " ";
                cout << endl;

                generateSequences(A, B, C, n, m, i, l + 1, len + 1, true);  
            }
        }
    }
}

int main() {
    int A[] = {10, 15, 25};
    int B[] = {1, 5, 20, 30};
    int n = sizeof(A) / sizeof(A[0]);
    int m = sizeof(B) / sizeof(B[0]);

    int C[n + m];  

    generateSequences(A, B, C, n, m, 0, 0, 0, true);  // Start by picking from A

    return 0;
}