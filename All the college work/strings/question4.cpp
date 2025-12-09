#include <iostream>
using namespace std;
#include <string>
int main(){
    string s1={"My name is"};
    string s2={"Hello class"};
    string s3={"Hello"};
    cout<<s1+" "+s2.substr(6,5)<<endl;
    cout<<s2.substr(0,5)+" "+s1<<endl;
    cout<<"Welcome "+s2.substr(0,5)+" "+s1+" "+s2.substr(6,5)<<endl;
    cout<<s3.substr(2,4);
}