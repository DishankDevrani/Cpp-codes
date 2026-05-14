#include <bits/stdc++.h>
using namespace std;


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
    cout<<"Set s3 is: "<<endl;

    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    for(int v:s3){
        cout<<v<<" ";
    }




}