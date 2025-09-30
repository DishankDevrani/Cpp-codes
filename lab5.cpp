#include <iostream>
using namespace std;
int main() {
    cout<<"Enter 1 for finding the biggest of 2 numbers"<<endl;
    cout<<"Enter 2 for finding the area and circumference of a circle"<<endl;
    cout<<"Enter 3 for swapping of two numbers"<<endl;
    cout<<"Enter 4 for finding if an year is leap or not"<<endl;
    cout<<"Enter 5 for addition,subtraction,multiplication and division of 2 numbers"<<endl;
    cout<<"Enter 6 for getting to know if a student is pass or fail from percentage of three numbers"<<endl;
    cout<<"Enter 7 for getting the square and cube of a number"<<endl;
    cout<<"Choices outside the range of 1-7 will get the biggest of 3 numbers"<<endl;
    int choice;
    cout<<"Enter your choice:"<<endl;
    cin>>choice;
    switch (choice)
    {
    case 1:
        int a,b;
        cout<<"Enter the first number: "<<endl;
        cin>>a;
        cout<<"Enter the second number: "<<endl;
        cin>>b;
        if(a>b){
            cout<<a<<" is the bigger number."<<endl;

        }
        else{
            cout<<b<<" is the bigger number."<<endl;

        }
        break;

        case 2:
        int r,pi,circum,area;
        cout<<"Enter the radius of the circle";
        cin>>r;
        pi=3.14;
        area=pi*r*r;
        circum=2*pi*r;
        cout<<"The area of the circle is:"<<area<<" and the circumference is"<<circum<<endl;
        break;

        case 3:
        int c,d,e;
        cout<<"Enter the first number:"<<endl;
        cin>>c;
        cout<<"Enter the second number:"<<endl;
        cin>>d;
        e=d;
        d=c;
        c=e;

        cout<<"The value of the first number is now: "<<c<<" and the value of the second number is: "<<d<<endl;
        break;

        case 4:
        int year,y;
        cout<<"Enter the year: ";
        cin>>year;
        y=year%4;
        if(y==0){
            cout<<"The given year is a leap year."<<endl;
        }
        else{
            cout<<"The given year is not a leap year."<<endl;

        }
        break;

        case 5;
        int f,g,h,i,j,k;
        cout<<"Enter the first number:"<<endl;
        cin>>f;
        cout<<"Enter the second number:"<<endl;
        cin>>g;
        h=f+g;
        cout<<"The sum of "<<f<<" and "<<g<<" is: "<<h;
        i=f-g;
        cout<<"The sum of "<<f<<" and "<<g<<" is: "<<;
        i=f*g;
        k=f/g;



    
    default:
        break;
    }

}