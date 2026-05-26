#include <bits/stdc++.h>
using namespace std;



int main(){
    unordered_map<int,string>info;
    int n;
    cout<<"Enter number of students: "<<endl;
    cin>>n;
    string name;
    int roll_num;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>roll_num;
        getline(cin,name);
        info.insert(make_pair(roll_num,name));
    }
    cout<<endl<<endl;
    for(auto elem:info){
        cout<<elem.first<<" "<<elem.second<<endl;
    }
    cout<<endl<<endl;
    info.clear();
    info.insert(make_pair(6,"Dipanshu"));
    for(auto elem:info){
        cout<<elem.first<<" "<<elem.second<<endl;
    }
}