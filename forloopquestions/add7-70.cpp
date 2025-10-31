#include <iostream>
using namespace std;
int main(){
    int i=1,s=0;
    for(i=1;i<=70;++i)
    {
        if((i%7==0)){
            s=s+i;

        }
    }
    cout<<s;
    
}