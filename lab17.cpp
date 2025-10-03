#include <iostream>
using namespace std;
int main(){
    int x;
    int sum{0};
    int y;
    cout<<"Enter from where you want the loop to start from: "<<endl;
    cin>>x;
    cout<<"Enter from where you want the loop to end: "<<endl;
    cin>>y;
    while(x<=y){
        sum=sum+x;
        x=x+1;

    }
    cout<<sum;
    return 0;
}