//Sorting values instead of keys.

#include <bits/stdc++.h>
using namespace std;

bool fun(pair<int,int>p1,pair<int,int>p2){
    return(p2.second>p1.second);
}

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>count;
    for(int i:a){
        count[i]++;
    }
    cout<<endl<<endl;
    vector<pair<int,int>>v(count.begin(),count.end());
    sort(v.begin(),v.end(),fun); 
    for(auto i:v){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
}
