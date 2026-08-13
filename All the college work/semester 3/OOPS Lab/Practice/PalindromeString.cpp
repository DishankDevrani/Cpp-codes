//WAP to check if a string is palindrome.


#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string a,string b){
    if(a==b){
        return true;
    }
    else{
        return false;
    }


}

int main(){
    string s;
    cout<<"Enter the string you want to check: "<<endl;
    getline(cin,s);
    string rev_s;
    rev_s=s;
    reverse(rev_s.begin(),rev_s.end());

    if(isPalindrome(s,rev_s)){
        cout<<"The string is palindrome. "<<endl;
    }
    else{
        cout<<"The string is not palindrome. "<<endl;
    }

}