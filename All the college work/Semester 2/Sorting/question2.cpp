//WAP to find out the last occurrence of an element in sorted array.(location)
#include <iostream>
#include <string>
#include <cstring>
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
    cout<<"Enter the target element: "<<endl;
    cin>>target;
    int c{0};

    for(int i=n-1;i>=0;i--){
        if(a[i]==target){
            cout<<"Item found at location: "<<i+1<<endl;
            c++;
            break;
        }
        
    }
    if(c==0){
        cout<<"Item not found!!"<<endl;
    }


}