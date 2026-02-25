#include <iostream>
using namespace std;
#include <string>
int main(){
    string s;
    getline(cin,s);
    int c{0};
    for(char ch:s){
        if(ch=='a'){
            c++;
        }
    }
    if(c>0){
        cout<<"there are "<<c<<" (a)s in the string.";
    }
    else{
        cout<<"There are no (a)s in the string.";
    }
}