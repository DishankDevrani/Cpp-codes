#include <iostream>
using namespace std;
int fact(int);
int main(){
    int n,x;
    cin>>n;
    x=fact(n);
    cout<<x;

}
int fact(int n){
    if(n==1)
    return 1;
    else
    return(n*fact(n-1));
}