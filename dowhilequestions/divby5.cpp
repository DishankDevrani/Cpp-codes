#include <iostream>
using namespace std;
int main(){
    int i{1};
    do
    {
        if(i%5==0)
        {
            cout<<i<<endl;
            i=i+1;
        }
        else{
            i=i+1;
        }
        

        
    } while (i<=500);
    
    
}