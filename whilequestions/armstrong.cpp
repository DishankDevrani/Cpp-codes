#include <iostream>
using namespace std;
int main(){
    int n,sum{0},digit;
    cin>>n;
    int a;
    a=n;
    while (n>0)
    {
        digit=n%10;
        sum=sum+(digit*digit*digit);
        n=n/10;
    }
    if (sum==a)
    {
        cout<<"Yes the number is Armstrong."<<endl;
    }
    else{
        cout<<"The number is not Armstrong."<<endl;

    }
    return 0;
    
}