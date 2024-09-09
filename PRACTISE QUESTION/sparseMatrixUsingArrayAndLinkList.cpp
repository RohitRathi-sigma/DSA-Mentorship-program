// Implement representation of sparse matrix using array and link list.

#include <iostream>
using namespace std;
class Node {
public:
 int row;
 int col;
 int value;
 Node* next;
 Node(int r, int c, int v) : row(r), col(c), value(v), next(nullptr) {}
};
int main() {
 int matrix[4][4] = {
 {0, 0, 3, 0},
 {0, 0, 0, 0},
 {4, 0, 5, 7},
 {0, 0, 0, 0}
 };
 Node* head = nullptr;
 Node* tail = nullptr;
 int size = 0;
 for (int i = 0; i < 4; i++) {
 for (int j = 0; j < 4; j++) {
 if (matrix[i][j] != 0) {
 Node* newNode = new Node(i, j, matrix[i][j]);
 if (head == nullptr) {
 head = newNode;
 tail = newNode;
 } else {
 tail->next = newNode;
 tail = newNode;
 }
 size++;
 }
 }
 }
 Node* temp = head;
 cout << "Sparse Matrix Representation (Linked List):" << endl;
 while (temp != nullptr) {
 cout << "Row: " << temp->row << " Column: " << temp->col << " Value: " << temp->value << endl;
 temp = temp->next;
 }
 int** sparseArray = new int*[size];
 for (int i = 0; i < size; i++) {
 sparseArray[i] = new int[3];
 }
 temp = head;
 int i = 0;
 while (temp != nullptr) {
 sparseArray[i][0] = temp->row;
 sparseArray[i][1] = temp->col;
 sparseArray[i][2] = temp->value;
 temp = temp->next;
 i++;
 }
 cout << "Sparse Matrix Representation (Array):" << endl;
 for (int i = 0; i < size; i++) {
 cout << sparseArray[i][0] << " " 
 << sparseArray[i][1] << " " 
 << sparseArray[i][2] << endl;
 }
 for (int i = 0; i < size; i++) {
 delete[] sparseArray[i];
 }
 delete[] sparseArray;
 temp = head;
 while (temp != nullptr) {
 Node* next = temp->next;
 delete temp;
 temp = next;
 }
 return 0;
}