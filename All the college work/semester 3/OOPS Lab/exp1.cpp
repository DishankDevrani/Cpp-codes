// #include<bits/stdc++.h>
// using namespace std;
// // class Greeter{
//   public:
//     void hello(){
//         cout<<"Hello World!"<<endl;
//     }
// };
// int main(){
//     Greeter g;
//     g.hello();
//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;
// class Car{
//     private:
//         string model;
//         int speed;
//     public:
//         Car(string m, int s){
//             model = m;
//             speed = s;
//         }
//         void display(){
//             cout<<"Model: "<<model<<endl;
//             cout<<"Speed: "<<speed<<" km/h"<<endl;
//         }
// };


#include<bits/stdc++.h>
using namespace std;
class MyClass{
    public:
    int myYear;
    string myName;
    string myBranch;
    int a,b,c,d,e;
};
int main(){
    MyClass myObj;
    cout<<"Enter your year of study: ";
    cin>>(myObj.myYear);
    cout<<"Enter your name: ";
    cin>>(myObj.myName);
    cout<<"Enter your branch: "<<endl;
    cin>>(myObj.myBranch);
    cout<<"Enter your marks in Maths: "<<endl;
    cin>>(myObj.a);
    cout<<"Enter your marks in Mech: "<<endl;
    cin>>(myObj.b);
    cout<<"Enter your marks in DSA: "<<endl;
    cin>>(myObj.c);
    cout<<"Enter your marks in English: "<<endl;
    cin>>(myObj.d);
    cout<<"Enter your marks in Electronics: "<<endl;
    cin>>(myObj.e);
    float percent = (myObj.a + myObj.b + myObj.c + myObj.d + myObj.e) * 100 / 500;
    cout<<"Your percentage is: "<<percent<<"%"<<endl; 
}