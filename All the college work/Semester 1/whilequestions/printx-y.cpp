#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter first:"<<endl;
    cin>>x;
    int y;
    cout<<"Enter second:"<<endl;
    cin>>y;
    while(x<=y){
        cout<<x<<endl;
        x=x+1;
    }
}