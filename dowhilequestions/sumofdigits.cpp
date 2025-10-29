#include <iostream>
using namespace std;
int main(){
    int n,sum{0},digit;
    cin>>n;
    do
    {
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    } while (n>0);
    



    cout<<sum;
}