//WAP to take an array of 10 numbers, create a map for it and print in decreasing order
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10];
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    map<int,int,greater<int>>M;
    for(int i:a){
        M[i]++;
    }
    int max=a[0];

    for(auto elem:M){
        cout<<elem.first<<" ";
        cout<<elem.second<<endl;
        
    }
}