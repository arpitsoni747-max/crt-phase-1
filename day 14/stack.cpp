#include<iostream>
using namespace std;

class Stack {
    int top;
    int arr[100];

public:
    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++top] = x;
        cout << x << " pushed into stack" << endl;
    }

    void pop() {
        if (top == -1) {
            cout << "Stack Underflow" << endl;
            return;
        }

        cout << arr[top] << " popped from stack" << endl;
        top--;
    }

    int peek() {
        if (top == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }

        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.peek() << endl;

    s.pop();

    cout << "Top element after pop: " << s.peek() << endl;

    return 0;
}