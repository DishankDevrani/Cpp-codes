#include <iostream>
using namespace std;

int add(int a,int b){
    int z;
    z=a+b;
    return(z);
}
int main(){
    int x,y,c;
    cin>>x>>y;
    c=add(x,y);
    cout<<c;
    return 0;
}