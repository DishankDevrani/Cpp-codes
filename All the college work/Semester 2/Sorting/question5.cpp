//WAP to check the last ocurrence of every element in an array.

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
    int loc;
    int c;
    for(int i=0;i<n;i++){
        loc=i+1;
        for(int j=i+1;j<n;j++){
            if(a[i]==a[j]){
                loc=j+1;
            }
        }
        cout<<"Location of "<<a[i]<<" is "<<loc<<endl;
    }
    
    
}