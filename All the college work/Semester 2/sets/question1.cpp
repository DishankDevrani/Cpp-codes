#include <bits/stdc++.h>
using namespace std;


//WAP to concatenate 3 sets into a single set.

int main(){
    set<int>s1;
    set<int>s2;
    set<int>s3;
    int n;
    int x;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s2.insert(x);
    }
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s3.insert(x);
    }
    cout<<endl;
    set<int>res;
    res.insert(s1.begin(),s1.end());
    res.insert(s2.begin(),s2.end());
    res.insert(s3.begin(),s3.end());
    for(int v:res){
        cout<<v<<" ";
    }
}