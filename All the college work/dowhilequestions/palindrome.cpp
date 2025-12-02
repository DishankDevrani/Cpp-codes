#include <iostream>
using namespace std;
int main(){
    int n{0},a{0},d{0},s{0};
    cin>>n;
    a=n;
    do
    {
        d=n%10;
        s=s*10+d;
        n=n/10;
    } while (n>0);
    if (s==a)
    {
        cout<<"Yes the number is palindrome"<<endl;
    }
    else{
        cout<<"The number is not palindrome"<<endl;
    }
    

}