//To take an array and output the elements with their address.

#include <bits/stdc++.h>
using namespace std;

int main(){

    cout<<"Dishank Devrani"<<endl<<"Roll no: 2503201000473"<<endl;
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
   

    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<endl;

    for(int i=0;i<n;i++){
        cout<<"The element is: "<<a[i]<<" with the address as: "<<&a[i]<<endl;
    }

    return 0;
}