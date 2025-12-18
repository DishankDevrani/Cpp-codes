#include <iostream>
using namespace std;
class table{
    public:
    int n;

    void table1(int n){
        for(int i=1;i<=10;i++){
            cout<<n<<" x "<<i<<" = "<<n*i<<endl;
        }
    }
};
int main(){
    table s;
    cin>>s.n;
    s.table1(s.n);
}