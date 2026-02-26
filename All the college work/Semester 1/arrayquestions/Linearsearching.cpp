#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the arrray: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int item;
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>item;
    int loc{0};

    for(int i=0;i<n;i++){
        if(a[i]==item){
            loc=i+1;
        }
    }
    if(loc==0){
        cout<<"Item not found."<<endl;
    }
    else{
        cout<<"Item found at location: "<<loc<<endl;
    }

}