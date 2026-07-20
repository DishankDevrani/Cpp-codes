#include <bits/stdc++.h>
using namespace std;



int percentage(int a[5]){
    int perc{0};
    const int total{500};
    int sum{0};
    for(int i=0;i<5;i++){
        sum=sum+a[i];
    }
    perc=(sum*100)/500;
    return perc;
}

int main(){
    string name;
    cout<<"Enter the name of the student: ";
    getline(cin,name);
    cout<<endl;

    int age;
    cout<<"Enter the age of the student: ";
    cin>>age;
    cout<<endl;

    int marks[5];
    cout<<"Enter the marks of the student(out of 100): "<<endl;
    for(int i=0;i<5;i++){
        cin>>marks[i];
    }
    int perc;
    perc=percentage(marks);
    cout<<"Percentage of the student is: "<<perc<<"%"<<endl;

    return 0;

}