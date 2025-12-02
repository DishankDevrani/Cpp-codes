#include <iostream>
using namespace std;
int w(int);
int main(){
    int n;
    cin>>n;
    cout<<w(n);    
}

int w(int n){
        while(n>9){
        int sum;
        sum=0;
        int digit{0};
    while(n>0){
        
        digit=n%10;
        sum=sum+digit;
        n=n/10;
    }
    n=sum;
    
}
return n;

}