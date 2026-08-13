#include <bits/stdc++.h>
using namespace std;

class Student {
public:
    void input() {
        string name;
        int age;
        int m1, m2, m3, m4, m5;

        cout << "Enter name of Student: ";
        getline(cin, name);

        cout << "Enter age of student: ";
        cin >> age;

        cout << "Enter Marks of student: ";
        cin >> m1 >> m2 >> m3 >> m4 >> m5;

        int result = (m1 + m2 + m3 + m4 + m5) * 100 / 500;

        cout << "Result is: " << result << "%" << endl;

        cin.ignore();   
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();      

    for (int i = 1; i <= n; i++) {
        Student s;
        s.input();
    }
}