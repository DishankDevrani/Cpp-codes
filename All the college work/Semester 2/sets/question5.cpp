#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s1;
    set<int>s2;
    set<int>s3;
    set<int>s4;
    int n;
    int x;
    cout<<"Enter the size of the sets: "<<endl;
    cin>>n;
    cout<<"Enter elements of the first set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<endl;
    cout<<"Enter the elements of the second set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s2.insert(x);
    }
    cout<<endl;

    set_difference(s1.begin(),s1.end(),s2.begin(),s2.end(),inserter(s3,s3.begin()));
    int P;
    P=s3.size();
    set_difference(s2.begin(),s2.end(),s1.begin(),s1.end(),inserter(s4,s4.begin()));
    int Q;
    Q=s4.size();
    int res;
    res=P*Q;
    cout<<"The final result is: "<<res<<endl;

}