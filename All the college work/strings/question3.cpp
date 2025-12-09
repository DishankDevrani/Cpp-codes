#include <iostream>
using namespace std;
#include <string>
int main(){
    string s1;
    string s2;
    getline(cin,s1);
    cout<<endl;
    getline(cin,s2);
    cout<<endl;
    int len_s1;
    len_s1=s1.length();
    string s3=s1.substr((len_s1)-3,(len_s1)-1);
    string s4=s3+s2;
    cout<<s4<<endl;
}