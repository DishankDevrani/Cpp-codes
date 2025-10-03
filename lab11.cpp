#include <iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the number you want the loop to end at: "<<endl;
    cin>>y;
    int i;
    i=2;
    while(i<=y){
        cout<<i<<endl;
        i+=2;

    }
    return 0;
}