/**/

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int u_count{0};
    int nu_count{0};
    unordered_map<int,int>count;
    for(int i:a){   
        count[i]++;
    }
    int sum_u{0};
    int sum_nu{0};
    
    for(auto elem:count){
        if(elem.second==1){
            u_count++;
            sum_u=sum_u+elem.first;
        }
        else{
            nu_count++;
            sum_nu=sum_nu+elem.first;
        }
    }
    cout<<"Number of unique elements are: "<<u_count<<endl;
    cout<<"Number of non unique elements are: "<<nu_count<<endl;
    cout<<"Sum of unique elements is: "<<sum_u<<endl;
    cout<<"Sum of non unique elements is: "<<sum_nu<<endl;
}