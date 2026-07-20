#include <bits/stdc++.h>
using namespace std;



int percentage(int a,int b,int c,int d,int e){
    int perc{0};
    const int total{500};
    int sum{0};
    sum=a+b+c+d+e;

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

    int m1,m2,m3,m4,m5;

    cout<<"Give the student marks out of a 100."<<endl;

    cout<<"Enter marks of the 1st subject:";
    cin>>m1;
    cout<<"Enter marks of the 2nd subject:";
    cin>>m2;
    cout<<"Enter marks of the 3rd subject:";
    cin>>m3;
    cout<<"Enter marks of the 4th subject:";
    cin>>m4;
    cout<<"Enter marks of the 5th subject:";
    cin>>m5;
    
    int perc;
    perc=percentage(m1,m2,m3,m4,m5);
    cout<<"Percentage of the student is: "<<perc<<"%"<<endl;

    return 0;

}