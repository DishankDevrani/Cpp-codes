#include <iostream>
using namespace std;
int main(){
    int T,z;
    cin>>T;
    for(z=1;z<=T;z++){
    int N,K,i,j,x,c{0};
    int arr[2]{N,K};
    for(int i=0;i<2;i++){
        cin>>arr[i];
    }
    int heights[arr[0]];
    for(j=0;j<arr[0];j++){
        cin>>heights[j];
    }
    for(x=0;x<arr[0];x++){
        if(arr[1]<heights[x]){
            c=c+1;
        }
    }
    cout<<c<<endl;
}
}