/*For left shifting*/
#include <iostream>
using namespace std;
#include <string>
#include <algorithm>
int main(){
    string s;
    getline(cin,s);
    int x;
    cout<<"Enter the shift units: "<<endl;
    cin>>x;
    int n;
    n=s.length();
    string s1;
    s1=s.substr(x,n)+s.substr(0,x);
    cout<<s1;
}