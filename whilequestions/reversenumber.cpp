#include <iostream>
using namespace std;
int main(){
    int n,sum{0},digit;
    cin>>n;
    while (n>0)
    {
        digit=n%10;
        sum=sum*10+digit;
        n=n/10;
    }
    cout<<sum;
}