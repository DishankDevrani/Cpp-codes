#include <iostream>
using namespace std;

// Addition
int calculate(int a, int b) {
    return a + b;
}

double calculate(double a, double b) {
    return a + b;
}

// Multiplication
int calculate(int a, int b, int c) {
    return a * b * c;
}

int main() {
    cout << "Addition of integers: "
         << calculate(10, 20) << endl;

    cout << "Addition of decimal numbers: "
         << calculate(10.5, 20.5) << endl;

    cout << "Multiplication of three integers: "
         << calculate(2, 3, 4) << endl;

    return 0;
}