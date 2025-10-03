#include <iostream>
using namespace std;
int main(){
    int n,i=1,m;
    cout<<"Enter the number for which to write the table for: "<<endl;
    cin>>n;
    while(i<=10){
        m=n*i;
        cout<<n<<"*"<<i<<"="<<m<<endl;
        i=i+1;
    }


    return 0;
}