#include <iostream>
using namespace std;
int fact(int a){
    int i,fact=1;
    for(i=1;i<=a;i++){
        fact=fact*i;
    }
    return(fact);
}
int main(){
    int a,d;
    cin>>a;
    d=fact(a);
    cout<<d;
}