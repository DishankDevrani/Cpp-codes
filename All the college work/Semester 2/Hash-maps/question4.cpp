/*given a list of integers having n elements.Print the integers in decreasing order of their frequencies of occurence in the list.
Each integer should appear only once in the output, in-case of a tie print the smaller element first.*/

#include <bits/stdc++.h>
using namespace std;

bool fun(pair<int,int>p1,pair<int,int>p2){
    return(p1.second>p2.second);
}

int main(){
    int n;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>count;
    for(int i:a){
        count[i]++;
    }
    cout<<endl<<endl;
    vector<pair<int,int>>v(count.begin(),count.end());
    sort(v.begin(),v.end(),fun);

    for(auto i:v){
        cout<<i.first<<" ";
        cout<<i.second<<endl;
    }
}