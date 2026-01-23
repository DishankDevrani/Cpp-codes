#include <iostream>
#include <string>

using namespace std;

int main() {

    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    size_t length = input.length();

    // For each row i (0 to length-1)
    for (size_t i = 0; i < length; i++) {

        // 1. Print leading spaces
        size_t spaces = length - i - 1;
        for (size_t s = 0; s < spaces; s++)
            cout << " ";

        // 2. Print increasing sequence: input[0] to input[i]
        for (size_t j = 0; j <= i; j++)
            cout << input[j];

        // 3. Print decreasing sequence: input[i-1] down to input[0]
        if (i > 0) {
            for (int j = i - 1; j >= 0; j--)
                cout << input[j];
        }

        cout << endl;
    }

    return 0;
}
