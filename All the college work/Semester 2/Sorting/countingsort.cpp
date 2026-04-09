#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int max;
    max=a[0];
    for(int i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }

    }
    
    int c[max+1];
    for(int i=0;i<=max;i++){
        c[i]=0;
    }
    for(int j=0;j<n;j++){
        c[a[j]]++;
    }
    for(int i=1;i<=max;i++){
        c[i]=c[i]+c[i-1];
    }
    int b[n];
    for(int j=n-1;j>=0;j--){
        b[c[a[j]]-1]=a[j];
        c[a[j]]=c[a[j]]-1;

    }
    cout<<"Sorted array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<b[i]<<" ";
    }

}