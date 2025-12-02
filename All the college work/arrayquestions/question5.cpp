#include <iostream>
using namespace std;
int main(){
    int i,a;
    int arr[5];
    for(i=0;i<5;i++){
        cin>>arr[i];
    }
    int max;
    max=arr[0];
    for(i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<max<<" is the biggest number."<<endl;
}
