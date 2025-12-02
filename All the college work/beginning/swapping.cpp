#include <iostream>
using namespace std;
int main(){
    int a,b,c{0};
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Before swapping:"<<c<<" "<<a<<endl;
    cout<<"After swapping:"<<a<<" "<<b<<endl;
    return 0;
}