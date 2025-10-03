#include <iostream>
using namespace std;
int main(){ 
    int x;
    cout<<"Enter the number you want to start the loop from: "<<endl;
    cin>>x;
    int y;
    cout<<"Enter the number you want the loop to end at: "<<endl;
    cin>>y;
    while (x<=y)
    {
        cout<<x<<endl;
        x+=1;
    }
return 0;
}