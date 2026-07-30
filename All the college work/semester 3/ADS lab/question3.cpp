//Merging of two arrays.

#include <bits/stdc++.h>
using namespace std;

int main(){

    

    int n,m;
    cout<<"Enter the size of the first array: "<<endl;
    cin>>n;
    cout<<endl;

    cout<<"Enter the size of the second array: "<<endl;
    cin>>m;
    cout<<endl;


    vector<int>result;

    int a[n], b[m];

    cout<<"Enter elements for the first array: "<<endl;

    for(int i=0;i<n;i++){
        cin>>a[i];
        result.push_back(a[i]);;
    }

    cout<<endl<<"Enter elements for the second array: "<<endl;

    for(int i=0;i<m;i++){
        cin>>b[i];
        result.push_back(b[i]);
    }

    cout<<endl;

    cout<<"The merged array is: "<<endl;
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }

}