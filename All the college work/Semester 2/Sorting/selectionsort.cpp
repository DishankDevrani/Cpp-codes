#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int t{0};
    int min{0};
    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        t=a[i];
        a[i]=a[min];
        a[min]=t;
    }

    cout<<"Sorted array is: "<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}