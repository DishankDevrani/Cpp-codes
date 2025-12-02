#include <iostream>
using namespace std;
int fib(int);
int main(){
    int n,i,r;
    cin>>n;
    for(i=0;i<n;i++){
        r=fib(i);
        cout<<r<<" ";

    }
}
int fib(int n){
    if(n==0)
    return 0;
    if(n==1)
    return 1;
    else
    return(fib(n-1)+fib(n-2));

}