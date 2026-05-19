//given array, find the product of count of unique and non-unique elements.
#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[11];
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<11;i++){
        cin>>a[i];
    }
    map<int,int>M;
    for(int i:a){
        M[i]++;
    }
    int c_non_unique=0;
    int c_unique=0;
    for(auto elem:M){
        if(elem.second>1){
            c_non_unique++;

        }
        else{
            c_unique++;
        }
    }
    int res;
    res=c_non_unique*c_unique;
    cout<<res;
}