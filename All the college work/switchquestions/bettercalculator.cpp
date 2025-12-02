#include <iostream>
using namespace std;
int main(){
    char tell;
    
    start:

    float a;
    cout<<"Enter the first number:"<<endl;
    cin>>a;
    float b;
    cout<<"Enter the second number:"<<endl;
    cin>>b;
    float c;

    


    cout<<"Press + for addition."<<endl;
    cout<<"Press - for subtraction."<<endl;
    cout<<"Press * for multiplication."<<endl;
    cout<<"Press / for division."<<endl;
    char choice;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;

    switch(choice){

    case('+'):
    c=a+b;
    cout<<"Addition of the numbers is:"<<c<<endl;
    break;

    case('-'):
    c=a-b;
    cout<<"Subtraction of the numbers is:"<<c<<endl;
    break;
    
    case('*'):
    c=a*b;
    cout<<"Multiplication of the numbers is:"<<c<<endl;
    break;

    case('/'):
    c=a/b;
    cout<<"Division of the numbers is:"<<c<<endl;
    break;

    default:
    cout<<"Thanks for using."<<endl;


}
cout<<"Do you want to continue using the calculator?(y/n) "<<endl;
    cin>>tell;
    if(tell=='y'||tell=='Y'){
        goto start;
    }
    else{
        cout<<"Thank you for using the calculator."<<endl;
    }

return 0;
}