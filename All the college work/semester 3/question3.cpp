//WAP for prime number.


#include <bits/stdc++.h>
using namespace std;



bool isPrime(int a){
    int c{0};
    for(int i=2;i<=(a/2);i++){
        if(a%i==0){
            c++;
        }
    }

    if(c>0){
        return false;
    }
    else{
        return true;
    }
}

int main(){

    int n;
    cout<<"Enter the number you want to check: "<<endl;
    cin>>n;

    if(isPrime(n)){
        cout<<n<<" is a prime number."<<endl;
    }
    else{
        cout<<n<<" is not a prime number."<<endl;
    }

}