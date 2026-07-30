//Stack Push


#include <bits/stdc++.h>
using namespace std;

const int MAX = 10;   
int Stack[MAX];
int top = -1;


void Push(int value) {
    if (top>=MAX-1) {
        cout << "Stack Overflow" << endl;
    }
    else {
        top++;
        Stack[top] = value;
        cout << value << " pushed into stack." << endl;
    }
}

void Pop() {
    if (top == -1) {
        cout << "Stack is underflow" << endl;
    }
    else {
        cout << "Deleted element " << Stack[top] << endl;
        top = top - 1;
    }
}


void display() {
    if (top == -1) {
        cout << "Stack is empty." << endl;
    }
    else {
        cout << "Stack elements are:" << endl;
        for (int i = top; i >= 0; i--) {
            cout << Stack[i] << endl;
        }
    }
}

int main() {
    cout<<"Dishank Devrani"<<endl<<"Roll no: 2503201000473"<<endl;


    int n, value;

    cout << "Enter number of elements to push: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "Enter element: ";
        cin >> value;
        Push(value);
    }

    cout << "Popping top element..." << endl;
    Pop();   

    display();

    return 0;
}
