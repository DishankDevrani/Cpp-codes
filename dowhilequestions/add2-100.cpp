#include <iostream>
using namespace std;
int main(){
    int i{2};
    int s{0};
    do
    {
        s=s+i;
        i=i+1;
    } while (i<=100);
    cout<<s;
    
    
}