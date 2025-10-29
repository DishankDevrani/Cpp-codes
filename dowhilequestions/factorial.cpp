#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    int i;
    i=1;
    int mult;
    mult=1;
    do
    {
        mult=mult*i;
        i=i+1;
        
    } while (i<=a);
    

    
    cout<<mult;
    return 0;
}