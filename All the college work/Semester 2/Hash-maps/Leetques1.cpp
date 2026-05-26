/*A person wants to name his newborn daugter and son. 
he has got hold of a list of names according to his belief system.he wants to name his daughter by the name that appears 
least in his list of names and he wants to name his son by the name that appears the most in the list.in case of a tie he
will pick the lexicographically smaller name help that person find suitable names for his daughter and son.*/ 


#include <bits/stdc++.h>
using namespace std;
int main(){
    string x;
    vector<string>Names;
    int n;
    cout<<"Enter the number of names: "<<endl;
    cin>>n;
    cout<<"Enter the names: "<<endl;
    
    for(int i=0;i<n;i++){
        cin>>x;
        Names.push_back(x);
    }
    int size;
    size=Names.size();
    map<string,int>Count;
    for(string a:Names){
        Count[a]++;
    }
    cout<<endl<<endl;


    //FOR DAUGHTER NAME.
    string daughter;
    for(auto elem:Count){
        daughter=elem.first;
        break;
    }
    
    //FOR SON NAME.
    vector<int>c;

    for(auto elem:Count){
        c.push_back(elem.second);
    }
    int max=c[0];
    for(int i=0;i<c.size();i++){
        if(max<c[i]){
            max=c[i];
        }
    }
    string son;
    for(auto elem:Count){
        if(elem.second==max){
            son=elem.first;
            break;
        }
    }
    cout<<"Name of son: "<<son<<endl;
    cout<<"Name of daughter: "<<daughter<<endl;

    
    
    

    
}