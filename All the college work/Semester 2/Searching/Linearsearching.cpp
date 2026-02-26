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
    int item;
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>item;
    int k{0};

    int loc{-1};
    while(loc==(-1) && k<n){
        if(a[k]==item){
            loc=k+1;
        }
        k++;
    }
    if(loc==-1){
        cout<<"Item not found."<<endl;
    }
    else{
        cout<<"Item found at location: "<<loc<<endl;
    }
}