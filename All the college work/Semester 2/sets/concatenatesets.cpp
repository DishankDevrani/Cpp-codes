#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s1;
    set<int>s2;
    int n;
    cin>>n;
    int x,y;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>y;
        s2.insert(y);
    }
    cout<<endl;
    s1.insert(s2.begin(),s2.end());
    for(int v:s1){
        cout<<v<<" ";
    }
    cout<<endl;

    cout<<s1.count(10);
    
    
    
}