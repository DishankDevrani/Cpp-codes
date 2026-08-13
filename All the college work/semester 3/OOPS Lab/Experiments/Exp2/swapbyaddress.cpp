#include <bits/stdc++.h>
using namespace std;

class SwapDemo {
public:
 
    void swapByAddress(int *a, int *b) {
        int t = *a;
        *a = *b;
        *b = t;
    }
};

int main() {
    SwapDemo x;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;
    x.swapByAddress(&a, &b);
    cout << "After Call by Address: a = " << a << ", b = " << b << endl;

    return 0;
}