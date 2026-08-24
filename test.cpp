#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int marks;
    void display(){
        cout<<name<<": "<<marks<<endl;
    }
};

int main(){
    Student s1;
    s1.name="Riya";
    s1.marks=92;
    s1.display();

    Student *p=&s1;
    p->display();
}