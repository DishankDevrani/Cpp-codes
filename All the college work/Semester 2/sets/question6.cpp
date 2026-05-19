#include <bits/stdc++.h>
using namespace std;
//WAP to take two string type sets s1 and s2 and give the common characters


int main(){
    set<char>s1;
    set<char>s2;
    int n;
    char x;
    set<char>s3;
    cout<<"Enter size of the sets: "<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter elements of first set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    cout<<endl;
    cout<<"Enter elements of second set: "<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s2.insert(x);
    }
    for(int v:s1){
        if(s2.find(v)!=s2.end()){
            s3.insert(v);
        }
    }
    cout<<"Set s3 is: ";
    cout<<endl;
    for(char v:s3){
        cout<<v<<" ";
    }
    cout<<endl;
    cout<<"Count of s3: "<<s3.size();


}
