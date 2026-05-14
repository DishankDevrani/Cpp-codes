#include <bits/stdc++.h>
using namespace std;
//to sum max element and min element.
int main(){
    set<int>s1;
    int n;
    int x;
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++){
        cin>>x;
        s1.insert(x);
    }
    int s=accumulate(s1.begin(),s1.end(),1);
    cout<<s;
    cout<<endl;
    int max=*max_element(s1.begin(),s1.end());
    cout<<max;
    int min=*min_element(s1.begin(),s1.end());
    cout<<min;


}