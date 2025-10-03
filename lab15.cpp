#include <iostream>
using namespace std;
int main(){
    int i;
    int sum{0};
    i=100;
    while(i>=1){
        sum=sum+i;
        i=i-1;

    }
    cout<<sum;
    return 0;
}