#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++) {

        // print spaces
        for (int s = 1; s <= n - i; s++)
            cout << " ";

        // ascending numbers
        for (int j = 1; j <= i; j++)
            cout << j;

        // descending numbers
        for (int j = i - 1; j >= 1; j--)
            cout << j;

        cout << endl;
    }
}
