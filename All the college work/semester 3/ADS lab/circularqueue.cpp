#include <iostream>
using namespace std;

#define MAX 5

int queue[MAX];
int front = -1, rear = -1;

void enqueue(int value) {
    if ((rear + 1) % MAX == front) {
        cout << "Queue Overflow\n";
    }
    else if (front == -1) {
        front = rear = 0;
        queue[rear] = value;
    }
    else {
        rear = (rear + 1) % MAX;
        queue[rear] = value;
    }
}

void dequeue() {
    if (front == -1) {
        cout << "Queue Underflow\n";
    }
    else if (front == rear) {
        cout << "Deleted: " << queue[front] << endl;
        front = rear = -1;
    }
    else {
        cout << "Deleted: " << queue[front] << endl;
        front = (front + 1) % MAX;
    }
}

void display() {
    if (front == -1) {
        cout << "Queue is Empty\n";
    }
    else {
        cout << "Queue Elements: ";

        int i = front;

        while (true) {
            cout << queue[i] << " ";

            if (i == rear)
                break;

            i = (i + 1) % MAX;
        }

        cout << endl;
    }
}

int main() {
    int choice, value;
    cout<<"Dishank Devrani"<<endl;
    cout<<"Roll no:2503201000473"<<endl;

    do {
        cout << "\n1) Insert" << endl;
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