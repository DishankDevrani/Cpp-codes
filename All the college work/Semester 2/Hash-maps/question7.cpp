#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a1[n];
    int a2[n];

    cout<<"Enter the elements for 1st array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a1[i];
    }
    cout<<endl;
    cout<<"Enter the elements for 2nd array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a2[i];
    }
    unordered_map<int,int>m1;
    unordered_map<int,int>m2;
    for(int i:a1){
        m1[i]++;
    }
    for(int i:a2){
        m2[i]++;
    }
    int m1_max;
    int m2_max;

}