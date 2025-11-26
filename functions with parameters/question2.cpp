#include <iostream>
using namespace std;
int add(int x,int y,int z){
    int g;
    g=x+y+z;
    return(g);
}
int main(){
    int a,b,c,d;
    cin>>a>>b>>c;
    d=add(a,b,c);
    cout<<d;
    return 0;
}