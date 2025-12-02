#include <iostream>
using namespace std;
void swap(){
    int a,b,c;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<"Original numbers: "<<b<<" and "<<a<<endl;
    cout<<"After swapping numbers: "<<a<<" and "<<b<<endl;
}
int main(){
    swap();
    return 0;
}