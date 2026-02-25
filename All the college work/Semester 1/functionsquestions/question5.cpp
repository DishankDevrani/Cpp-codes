#include <iostream>
using namespace std;
void area(){
    float r,ar;
    cin>>r;
    ar=3.14*r*r;
    cout<<ar<<endl<<endl;

}
void circ(){
    float r,cir;
    cin>>r;
    cir=2*3.14*r;
    cout<<cir<<endl<<endl;
}
int main(){
    circ();
    circ();
    area();
    area();
}