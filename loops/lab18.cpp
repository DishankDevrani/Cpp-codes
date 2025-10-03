#include <iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter where you want the loop to end at: "<<endl;
    cin>>x;
   int i{1};
   int sum{0};
   while(i<=x){
    sum=sum+i;
    i=i+1;
   }
   cout<<sum;
    return 0;
}