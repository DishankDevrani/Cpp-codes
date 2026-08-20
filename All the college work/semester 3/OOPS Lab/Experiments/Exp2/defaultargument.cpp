#include <iostream>
using namespace std;

int add(int a, int b = 10) {
    return a + b;
}

int subtract(int a, int b = 10) {
    return a - b;
}

int main() {
    int a = 20;

    cout << "Addition: " << add(a) << endl;
    cout << "Subtraction: " << subtract(a) << endl;

    cout << "\nUsing both arguments:" << endl;
    cout << "Addition: " << add(20, 5) << endl;
    cout << "Subtraction: " << subtract(20, 5) << endl;

    return 0;
}