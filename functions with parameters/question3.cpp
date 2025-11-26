#include <iostream>
using namespace std;
int mod(int a, int b){
    int c;
    c=a%b;
    return c;
}
int avg(int a, int b){
    int c;
    c=(a+b)/2;
    return c;
}
int main(){
    int a,b,c,d,sum{0};
    cin>>a;
    cin>>b;
    c=mod(a,b);
    cout<<c;
    cout<<endl;
    d=avg(a,b);
    cout<<d;
    sum=c+d;
    cout<<sum;
    return 0;
}