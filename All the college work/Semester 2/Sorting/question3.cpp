//WAP to input a 1-D array. Find out the number of +ve and -ve integers.
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
    int c_p{0};
    int c_n{0};
    int c_z{0};

    for(int i=0;i<n;i++){
        if(a[i]<0){
            c_n++;
        }
        if(a[i]>0){
            c_p++;
        }
        if(a[i]==0){
            c_z++;
        }
    }
    cout<<"Number of zeroes: "<<c_z<<endl;
    cout<<"Number of +ve integers: "<<c_p<<endl;
    cout<<"Number of -ve integers: "<<c_n<<endl;

}