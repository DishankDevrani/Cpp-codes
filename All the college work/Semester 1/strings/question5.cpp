#include <iostream>
using namespace std;
#include <string>
int main(){
    int c{0};
    int c1{0};
    
    string s;
    getline(cin,s);
    char ar[]={'a','e','i','o','u','A','E','I','O','U'};
    for(char ch:s){
        for(char ch1:ar){
            if(ch==ch1){
                c++;
            }
        }
    }
    for(int ch1:s){
        if(ch1==32){
            c1++;
        }
    }
    int c2{0};
    for(char ch1:s){
        if(isdigit(ch1)){
            c2++;
        }
    }

    
    cout<<"Number of vowels is: "<<c<<endl;
    cout<<"The number of spaces are: "<<c1<<endl;
    cout<<"The number of digits are: "<<c2<<endl;
}