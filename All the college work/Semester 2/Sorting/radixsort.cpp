#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    
    int max=a[0];
    for(int i=1;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }

    
    for(int pos=1;(max/pos)>0;pos=pos*10){

        int c[10] = {0};   

        
        for(int j=0;j<n;j++){
            c[(a[j]/pos)%10]++;
        }

        
        for(int i=1;i<10;i++){
            c[i]=c[i]+c[i-1];
        }

        int b[n];

        
        for(int j=n-1;j>=0;j--){
            
            b[c[(a[j]/pos)%10]-1] = a[j];
            c[ (a[j]/pos)%10]--;
        }

        for(int i=0;i<n;i++){
            a[i]=b[i];
        }
    }

    
    cout<<"Sorted array: ";
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }

    return 0;
}