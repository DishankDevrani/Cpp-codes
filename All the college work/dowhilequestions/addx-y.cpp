#include <iostream>
using namespace std;
int main(){
    int x{0};
    cin>>x;
    int y{0};
    cin>>y;
    int s{0};
    do
    {
        s=s+x;
        x=x+1;
    } while (x<=y);
    cout<<s;
    
}