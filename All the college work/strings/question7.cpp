#include <iostream>
using namespace std;
#include <string>

int main() {
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if(s2.length()%2!=0){
    for (int i = 0; i < s1.length();) {
        if (i % 2 == 0) {
            s1.replace(i, 1, s2);
             i+=s2.length();
        }
        else{
            i++;
        }
    }
}
if(s2.length()%2==0){
     for (int i = 0; i < s1.length();) {
        if (i % 2 != 0||i==0) {
            s1.replace(i, 1, s2);
             i+=(s2.length()+1);
        }
        else{
            i++;
        }
    }
}

    cout << s1;
    return 0;
}
