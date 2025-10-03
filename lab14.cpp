#include <iostream>
using namespace std;
int main(){
    int i;
    int sum{0};
    i=2;
    while(i<=50){
        sum=sum+i;
        i=i+2;
    }
    cout<<sum;
return 0;
}