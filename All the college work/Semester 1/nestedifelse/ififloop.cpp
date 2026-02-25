#include <iostream>
using namespace std;
int main(){
    int sub1;
    cout<<"Enter the marks for the first subject:"<<endl;
    cin>>sub1;

    int sub2;
    cout<<"Enter the marks for the second subject:"<<endl;
    cin>>sub2;

    int sub3;
    cout<<"Enter the marks for the third subject:"<<endl;
    cin>>sub3;

    int percentage;
    percentage=((sub1+sub2+sub3)*100)/300;

    if(percentage>=80){
        cout<<"The grade is A."<<endl;
    }
    else if(percentage>=70&&percentage<80){
        cout<<"The grade is B."<<endl;
    }
    else if(percentage>=60&&percentage<70){
        cout<<"The grade is C."<<endl;
    }
    else{
        cout<<"The student is fail."<<endl;
    }
    return 0;
}