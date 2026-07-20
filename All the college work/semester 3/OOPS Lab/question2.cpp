//question 1 but for 5 students.
#include <bits/stdc++.h>
using namespace std;


int percentage(int m[5]){
    int sum{0};
    const int total{500};
    for(int i=0;i<5;i++){
        sum=sum+m[i];
    }
    int perc;
    perc=(sum*100)/total;
    return perc;
}

void information(string &a,int &b,int m[5],int &d){
    cout<<"Enter the name of the student: "<<endl;
    getline(cin,a);

    cout<<"Enter the age of the student: "<<endl;
    cin>>b;

    cout<<"Enter the marks of the student: "<<endl;
    for(int i=0;i<5;i++){
        cin>>m[i];
    }

    d=percentage(m);
    cin.ignore();



}

void display(string a,int b,int d){
    cout<<"Name of the student is: "<<a<<endl;
    cout<<"Age of the student is: "<<b<<endl;
    cout<<"Percentage of the student is: "<<d<<"%"<<endl<<endl;
}

int main(){

    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    cin.ignore();

    for(int i=1;i<=n;i++){

    string name;
    int age;
    int marks[5];
    int percentage;

    information(name,age,marks,percentage);
    display(name,age,percentage);

    
}
}


