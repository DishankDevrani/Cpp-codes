#include <bits/stdc++.h>
using namespace std;
//WAP to take two sets s1 and s2 and get the common elements of both into s3.

int main(){
    set<int>s1;
    set<int>s2;
    int n;
    int x;
    set<int>s3;
    cout<<"Enter size of the sets: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter elements of first set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<endl;
    cout<<"Enter elements of second set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s2.insert(x);
    }
    for(int v:s1){
        if(s2.count(v)==1){
            s3.insert(v);
        }
    }
    cout<<"Set s3 is: ";
    cout<<endl;
    for(int v:s3){
        cout<<v<<" ";
    }


}
