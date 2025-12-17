#include <iostream>
using namespace std;
class palindrome{
    public:
    int n;
    int digit;
    int pal_num{0};

    void check(int n){
        int original=n;
        while(n>0){
        digit=n%10;
        n=n/10;
        pal_num=pal_num*10+digit;
    }
    if(original==pal_num){
        cout<<"The number is palindrome."<<endl;
    }
    else{
        cout<<"The number is not palindrome."<<endl;
    }
}
};
int main(){
    palindrome s;
    cin>>s.n;
    s.check(s.n);
}