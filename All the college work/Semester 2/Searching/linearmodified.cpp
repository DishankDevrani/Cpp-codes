#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of the array: "<<endl;
    cin>>n;

    if(n>0){
    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int c{0};
    int item;
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>item;
    for(int i=0;i<n;i++){
        if(a[i]==item){
            cout<<"Item found at position: "<<i+1<<endl;
            c++;
        }
    }
    if(c==0){
        cout<<"Item not found!!"<<endl;
    }
    else{
        cout<<"Item found a total of "<<c<<" times."<<endl;
    }
}
else{
    cout<<"Array not given."<<endl;
}
    
    
} 