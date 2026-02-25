//To find biggest of 2 numbers and checking for equality


#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number: "<<endl;
    cin>>a;
    int b;
    cout<<"Enter the second number: "<<endl;
    cin>>b;
    if(a!=b){
        if(a>b){
            cout<<a<<" is bigger."<<endl;
        }
        else{
            cout<<b<<" is bigger."<<endl;
        }
        
    }
    else{
        cout<<"Both numbers are equal."<<endl;

    }
    return 0;
        
}