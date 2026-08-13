#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == MAX - 1) {
        cout << "Queue Overflow" << endl;
    } else {
        if (front == -1)
            front = 0;

        rear++;
        queue[rear] = value;

        cout << value << " inserted into the queue" << endl;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow" << endl;
    } else {
        cout << queue[front] << " deleted from the queue" << endl;

        front++;

        if (front > rear) {
            front = -1;
            rear = -1;
        }
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty" << endl;
    } else {
        cout << "Queue Elements: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }

        cout << endl;
    }
}

int main() {
    int choice, value;

    do {
        cout << "1) Insert" << endl;
        cout << "2) Delete" << endl;
        cout << "3) Display" << endl;
        cout << "4) Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                cout << "End" << endl;
                break;

            default:
                cout << "Invalid choice." << endl;
        }

    } while (choice != 4);

    return 0;
}