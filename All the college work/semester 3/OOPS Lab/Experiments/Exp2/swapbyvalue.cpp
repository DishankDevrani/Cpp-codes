#include <bits/stdc++.h>
using namespace std;

class SwapDemo {
public:

    
    void swapByValue(int a, int b) {
        int t = a;
        a = b;
        b = t;
        cout << "Inside Call by Value: a = " << a << ", b = " << b << endl;
    }

    
};

int main() {
    SwapDemo x;
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    
    x.swapByValue(a, b);
    cout << "After Call by Value: a = " << a << ", b = " << b << endl;

   

    return 0;
}