#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size for the array: "<<endl;
    cin>>n;
    int a[n],i,j;
    cout<<"Enter the elements for the array: "<<endl;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                int t{0};
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;  
            }
        }
    }
    cout<<"The elements of the sorted array are: "<<endl;
    for(i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}