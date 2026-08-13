#include<iostream>
#include<string>
using namespace std;

void Studentinfo(string name, int age , int m1 , int m2 , int m3 , int m4 , int m5)
{
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Marks in Subject 1: " << m1 << endl;
    cout << "Marks in Subject 2: " << m2 << endl;
    cout << "Marks in Subject 3: " << m3 << endl;
    cout << "Marks in Subject 4: " << m4 << endl;
    cout << "Marks in Subject 5: " << m5 << endl;
    int percentage = (m1 + m2 + m3 + m4 + m5)/5;
    cout << "Percentage: " << percentage << "%" << endl;

}

int main(){
    
     for(int i=1;i<=5;i++)
     {
        string name ;
        int age;
        int m1 , m2 , m3 , m4 , m5;
        
        cout << "\nEnter details of Student" << i << "\n";
        cin >> name ;
        cin>>age;
        cin>>m1 >> m2 >> m3 >> m4 >> m5;
        Studentinfo(name , age , m1 ,m2 , m3 , m4 , m5);
     }
    return 0;
}