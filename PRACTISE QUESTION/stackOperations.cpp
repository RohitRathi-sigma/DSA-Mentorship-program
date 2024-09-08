//Implement various operations of Stack .
// 1.Push  2.Pop
#include <iostream>
using namespace std;
int main() {
    int stack[100];
    int top = -1;
    if (top >= 100 - 1) {
        cout << "Stack Overflow" << endl;
    }
    else {
        stack[++top] = 10;
        cout << 10 << " pushed to stack" << endl;
        stack[++top] = 20;
        cout << 20 << " pushed to stack" << endl;
        stack[++top] = 30;
        cout << 30 << " pushed to stack" << endl;
    }
    if (top < 0) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements are: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
 }
    if (top < 0) {
        cout << "Stack Underflow" << endl;
    } else {
        cout << stack[top] << " popped from stack" << endl;
        top--;
    }
    if (top < 0) {
        cout << "Stack is empty" << endl;
    } else {
        cout << "Stack elements after pop are: ";
        for (int i = 0; i <= top; i++) {
            cout << stack[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
