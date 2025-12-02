#include <iostream>
using namespace std;
int main(){
    int i;
    i=1;
    int s;
    s=0;
    int x;
    cout<<"Enter:"<<endl;
    cin>>x;
    while(i<=x){
        s=s+i;
        i=i+1;
    }
    cout<<s<<endl;
}