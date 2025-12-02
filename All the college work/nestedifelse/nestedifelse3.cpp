//For the smallest of 3 numbers.


#include <iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the second number :"<<endl;
    cin>>b;
    int c;
    cout<<"Enter the thrid number :"<<endl;
    cin>>c;
    if(a<b){
        if(a<c){
            cout<<a<<" is the smallest number."<<endl;
        }
        else{
            cout<<c<<" is the smallest number."<<endl;
        }
    }
    else{
        if(b<c){
            cout<<b<<" is the smallest number."<<endl;
        }
        else{
            cout<<c<<" is the smallest number."<<endl;
        }
    }
    return 0;
}

