#include <iostream>
using namespace std;
int main(){
    int i;
    i=1;
    int s;
    s=0;
    while(i<=10){
        s=s+i;
        i=++i;
    }
    cout<<s<<endl;
}