#include <iostream>
using namespace std;
int main(){
    int i;
    int x;
    cout<<"Enter where you want the loop to end at: "<<endl;
    cin>>x;
    int sum;
    i=2;
    sum=0;
    while(i<=x){
        sum=sum+i;
        i=i+2;
    }
cout<<sum;
return 0;
}