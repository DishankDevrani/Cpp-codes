#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i;
    i=1;
    int mult;
    mult=1;

    while (i<=a)
    {
        
        mult=mult*i;
        i=i+1;
        
    }
    cout<<mult;
    return 0;
}