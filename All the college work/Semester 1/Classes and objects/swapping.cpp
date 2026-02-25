#include <iostream>
using namespace std;
class swapping{
    public:
    int a,b;
    void swap(int a,int b){
        int c;
        cout<<"Before swapping "<<a<<" "<<b<<endl;
        c=a;
        a=b;
        b=c;
        cout<<"After swapping "<<a<<" "<<b;
    }

};
int main(){
    swapping s;
    cin>>s.a>>s.b;
    s.swap(s.a,s.b);
}