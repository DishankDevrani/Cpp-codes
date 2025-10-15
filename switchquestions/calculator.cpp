#include <iostream>
using namespace std;
int main() {
    int choice;
    int a,b,c,d,e,f,g,h;
    cout<<"CALCULATOR"<<endl;
    cout<<"Enter 1 for addition"<<endl;
    cout<<"Enter 2 for subtraction"<<endl;
    cout<<"Enter 3 for multiplication"<<endl;
    cout<<"Enter 4 for division"<<endl;
    cout<<"NOTE:choices other than 1,2,3,4 will result in the modulus of the numbers"<<endl;
    cout<<"Enter 5 if you want to exit the calculator without any calculation."<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    if(choice==5){
            cout<<"End of the calculator."<<endl;
        }

    while(choice>0&&choice<5){
        
        
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

        switch(choice)
         {

        case 1:
        c=a+b;
        cout<<"The addition of the number is:"<<c<<endl;
        break;

        case 2:
        d=a-b;
        cout<<"The subtraction of the numbers is:"<<d<<endl;
        break;

        case 3:
        e=a*b;
        cout<<"The multiplication of the numbers is:"<<e<<endl;
        break;

        case 4:
        f=a/b;
        cout<<"The division of the numbers is:"<<f<<endl;
        break;

        default:
        g=a%b;
        cout<<"The modulus of the number is:"<<g<<endl;


    
}
    return 0;

    }
}