#include <iostream>
using namespace std;
int main(){
    int i,j,k;
    int arr1[3][3];
    int arr2[3][3];
    int arr3[3][3];
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr1[i][j];
        }
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cin>>arr2[i][j];
        }
    }
    cout<<"Matrix 1 is equal to"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr1[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<"And matrix 2 is equal to"<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            cout<<arr2[i][j]<<"   ";
        }
        cout<<endl;
    }
    cout<<endl<<"The multiplication of the two matrices is "<<endl;
    

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            arr3[i][j]=0;
            for(k=0;k<3;k++){
                arr3[i][j]=arr3[i][j]+arr1[i][k]*arr2[k][j];
            }
            cout<<arr3[i][j]<<"   ";
        }
        cout<<endl;
    }
    

}