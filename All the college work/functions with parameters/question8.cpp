#include <iostream>
using namespace std;
#include <vector>
vector <int> swap(int a,int b){
    return {b,a};
}
int main(){
    int a,b;
    cin>>a>>b;
    vector <int> d;
    d=swap(a,b);
    cout<<"before swapping "<<a<<" and "<<b<<endl;
    cout<<"after swapping "<<d[0]<<" and "<<d[1];
}

    

