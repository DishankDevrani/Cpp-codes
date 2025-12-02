#include <iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter the number of rows for the 1st matrix: "<<endl;
    cin>>x;
    cout<<"Enter the number of columns for the 1nd matrix: "<<endl;
    cin>>y;
    int a[x][y];
    cout<<"Enter the elements for the 1st matrix: "<<endl;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    int w,z;
    cout<<"Enter the number of rows for 2nd matrix: "<<endl;
    cin>>w;
    cout<<"Enter the number of columns for 2nd matrix: "<<endl;
    cin>>z;
    int b[w][z];
    cout<<"Enter elements for the 2nd matrix: "<<endl;
    for(int i=0;i<w;i++){
        for(int j=0;j<z;j++){
            cin>>b[i][j];
        }
    }

    int smaller_row;
    int smaller_col;
    if(x>w){
        smaller_row=w;
    }
    else{
        smaller_row=x;
    }
    if(y>z){
        smaller_col=z;
    }
    else{
        smaller_col=y;
    }
    int c{0};
    for(int i=0;i<smaller_row;i++){
        for (int j=0;j<smaller_col;j++){
            if(a[i][j]==b[i][j]){
                cout<<a[i][j]<<" ";
            }
            
        }
    }
    
}