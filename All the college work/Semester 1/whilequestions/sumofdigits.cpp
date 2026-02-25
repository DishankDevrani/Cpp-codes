#include <iostream>
using namespace std;
int main(){
    cout<<"Give the input as a 4 digit number."<<endl;
    int n,sum{0},digit;
    cin>>n;
    while (n>0)
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    cout<<sum;
}