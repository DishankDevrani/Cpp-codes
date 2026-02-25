#include <iostream>
using namespace std;
#include <string>
int main(){
    string s1;
    string s2;
    string s3;
    getline(cin,s1);
    getline(cin,s2);
    for(char ch:s1){
        if(ch=='a'||ch=='A'){
            s3=s3+ch;
        }
    }
    cout<<s2+s3;
}
