#include <bits/stdc++.h>
using namespace std;
int main (){
    unordered_set<int>s;
    int n,x;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>x;
        s.insert(x);
    }
    for(int v:s){
    cout<<v;
    }
    cout<<endl;
    cout<<s.size();
    s.erase(5);
    cout<<endl;
    for(int v:s){
    cout<<v;
    }
    cout<<endl;
    cout<<s.size();
}
//unordered sets me values print krte time random aayengi
