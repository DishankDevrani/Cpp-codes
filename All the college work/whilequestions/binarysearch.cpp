#include <iostream>
using namespace std;
int main(){
    int a[10],i,item,beg,end,mid;
    cout<<"Enter the number of the array: "<<endl;
    for(i=0;i<10;i++){
        cin>>a[i];
    }
    cout<<"Enter the number you want to search for: "<<endl;
    cin>>item;
    beg=0;
    end=9;
    while(beg<end){
        mid=(beg+end)/2;
        if(a[mid]==item){
            cout<<"item found ";
            break;
        }
        else{
            if(a[mid]>item){
                end=mid-1;
            }
            else{beg=mid+1;}
        }
    }
}