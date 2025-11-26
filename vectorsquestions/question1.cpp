#include <iostream>
using namespace std;
#include <vector>
int main(){
    int x;
    int i;
    vector<int>a;
    for(i=0;i<5;i++){
        cin>>x;
        a.push_back(x);
    }
    cout<<"The last elemnt of the vector is: "<<a[a.size()-1];
    return 0;
}