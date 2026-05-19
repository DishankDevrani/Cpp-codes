#include <bits/stdc++.h>
using namespace std;

//WAP to display elements of the array that are not repeating.

int main(){
    int a[9]={2,4,4,2,7,9,1,3,4};
    map<int,int>M;
    for(int i:a){
        M[i]=M[i]+1;
    }
    for(auto elem:M){
        if(elem.second==1){
            cout<<elem.first<<" ";
        }
        
    }
}