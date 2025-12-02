#include <iostream>
using namespace std;
float percentage(float a,float b,float c){
    float d;
    d=((a+b+c)*100)/300;
    return(d);
}
int main(){
    float a,b,c,d;
    cin>>a;
    cin>>b;
    cin>>c;
    d=percentage(a,b,c);
    if(d>=50){
        cout<<"Pass";
    }
    else{
        cout<<"Fail";
    }
}