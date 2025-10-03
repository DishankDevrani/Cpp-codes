#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the number you want the loop to end at: "<<endl;
    cin>>x;
    int i;
    i=1;
    while(i<=x){
        cout<<i<<endl;
        i+=1;
    }
    return 0;
}