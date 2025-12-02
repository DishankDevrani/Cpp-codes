#include <iostream>
using namespace std;
int main(){
    int i{1};
    int mult;
    mult=1;
    do
    {
        mult=mult*i;
        i=i+1;

        
    } while (i<=5);
    
    cout<<mult;
}