#include <iostream>
using namespace std;
int main() {
    int a{0},b{0},c{0};
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    cout<<"Enter the third number:"<<endl;
    cin>>c;
    if(a>b)
    {if(a>c){
        cout<<a<<" is the biggest number."<<endl;
    }
    else{
        cout<<c<<" is the biggest number."<<endl;
    }   
    }
    else{
        if(b>c){
            cout<<b<<" is the biggest number"<<endl;

        }
        else{
            cout<<c<< " is the biggest number"<<endl;
        }


    }
    return 0;
    
}
    