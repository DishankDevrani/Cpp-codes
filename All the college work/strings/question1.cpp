#include <iostream>
using namespace std;
#include <string>
int main(){
    string s1;
    getline(cin,s1);
    string s2;
    getline(cin,s2);
    int lens1;
    lens1=s1.length();
    int lens2;
    lens2=s2.length();
    if(lens1==lens2){
        cout<<s1+s2;
    }
    if(lens1>lens2){
        for(char ch:s1){
            cout<<ch<<" ";
        }
    }
    else{
        cout<<lens2;
    }
    

}