#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of elements for the array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements for the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int target;
    cout<<"Enter the element you want to search for: "<<endl;
    cin>>target;
    int beg,mid,end;
    beg=0;
    end=n-1;
    bool found=false;

    while(beg<end){
    mid=(beg+end)/2;
    if(a[mid]==target){
        cout<<"The element is in the given array."<<endl;
        found=true;
        break;
    }
    else{
        if(a[mid]>target){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
    }
}
 if(!found){
        cout<<"Item not found!!"<<endl;
    }
}