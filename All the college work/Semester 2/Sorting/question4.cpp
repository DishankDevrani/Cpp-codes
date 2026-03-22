//WAP to find out the first and last occurence of a given element in an array
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
    int target;
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>target;

    for(int i=0;i<n;i++){
        if(a[i]==target){
            cout<<"Item first found at location: "<<i+1<<endl;
            break;
        }
    }
    for(int i=n-1;i>0;i--){
        if(a[i]==target){
            cout<<"Item last found at location: "<<i+1<<endl;
            break;
        }
    }
}