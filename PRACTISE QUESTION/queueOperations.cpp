//  Implement various operations of Queue.

#include <iostream>
#define SIZE 5 
using namespace std;
int main() {
 int items[SIZE]; 
 int front = -1, rear = -1; 
 if (rear == SIZE - 1) {
 cout << "Queue is full" << endl;
 }
 else {
 if (front == -1) front = 0; 
 rear++;
 items[rear] = 10; 
 cout << "Inserted 10" <<endl;
 }
 if (rear == SIZE - 1) {
 cout << "Queue is full" <<endl;
 }
 else {
 rear++;
 items[rear] = 20;
 cout << "Inserted 20" <<endl;
 }
 if (front == -1 || front > rear) {
 cout << "Queue is empty" << endl;
 }
 else {
 cout << "Queue elements are: ";
 for (int i = front; i <= rear; i++) {
 cout << items[i] << " ";
 }
 cout <<endl;
 }
 if (front == -1 || front > rear) {
 cout << "Queue is empty" << endl;
 }
 else {
 int element = items[front];
 front++;
 cout << "Dequeued element: " << element << endl;
 if (front > rear) {
 front = rear = -1;
 }
 }
 if (front == -1 || front > rear) {
 cout << "Queue is empty" << endl;
 }
 else {
 cout << "Front element is: " << items[front] << endl;
 }
 if (front == -1 || front > rear) {
 cout << "Queue is empty" << endl;
 }
 else {
 cout << "Queue elements are: ";
 for (int i = front; i <= rear; i++) {
 cout << items[i] << " ";
 }
 cout << endl;
 }
 return 0;
}
