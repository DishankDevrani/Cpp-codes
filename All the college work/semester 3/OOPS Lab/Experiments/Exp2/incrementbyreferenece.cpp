#include <bits/stdc++.h>
using namespace std;

class incrementdemo{

    public:
    void incrementbyreference(int &a){
        
        int t=a;
        a++;
        cout<<"Before increment: "<<t<<endl;
        cout<<"After increment: "<<a<<endl;
        
    }
};


int main(){
    incrementdemo x;
    int a;
    cin>>a;
    x.incrementbyreference(a);
}