//WAP to input a 1-D array and a target. Now print yes if there exists a pair whose sum is equal to target otherwise print no.
//Also find out the number of pairs.
#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number of elements: "<<endl;
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

    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==target){
                c++;
            }
        }
    }
    if(c>0){
        cout<<"Yes"<<endl;
        cout<<"The number of pairs found are: "<<c<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}