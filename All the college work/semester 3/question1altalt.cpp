#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
    string name;
    int age;
    int marks[5];
    int sum{0};
    int percentage;
    const int total{500};

    void takename(){
        cout<<"Enter the name of the student:"<<endl;
        getline(cin,name);
        
    }

    void takeage(){
        cout<<"Enter the age of the student: "<<endl;
        cin>>age;
    }

    void takemarks(){
        cout<<"Enter marks of the student: "<<endl;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
        
    }

    int perc(){
        sum=0;
        for(int i=0;i<5;i++){
            sum=sum+marks[i];
        }
        percentage=(sum*100)/total;
        return percentage;
    }

};

int main(){
    Student a;
    a.takename();
    a.takeage();
    a.takemarks();
    int percentage;
    percentage=a.perc();

    cout<<"Name of the student is: "<<a.name<<endl;
    cout<<"Age of the student is: "<<a.age<<endl;
    cout<<"Percentage of the student is: "<<percentage<<"%"<<endl;
}