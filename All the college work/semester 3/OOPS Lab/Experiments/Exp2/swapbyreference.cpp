#include <bits/stdc++.h>
using namespace std;

class SwapDemo {
public:

    void swapByReference(int &a, int &b) {
        int t = a;
        a = b;
        b = t;
    }

    
};

int main() {
    SwapDemo x;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b; 
    x.swapByReference(a, b);
    cout << "After Call by Reference: a = " << a << ", b = " << b << endl;

    
   

    return 0;
}