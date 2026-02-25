#include <iostream>
using namespace std;
int main(){
    int n,b=0,c=1,d;
    cin>>n;
    for (int a=1 ; a<=n ; a++)
    {
        cout<<b<<endl;
        d=b+c;
        b=c;
        c=d;
        
    }
    return 0;
    

}