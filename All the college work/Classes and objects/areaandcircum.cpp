#include <iostream>
using namespace std;
class circle{
    private:
    float r;
   public:
    float area(int r){
        float area_of_circle;
        area_of_circle=3.14*r*r;
        return(area_of_circle);
    }
    float circumference(int r){
        float circ_of_circle;
        circ_of_circle=2*3.14*r;
        return(circ_of_circle);
    }
    
};
int main()
{
    circle s;
    int r;
    cin>>r;
    float x,y;
    x=s.area(r);
    cout<<x<<endl;
    y=s.circumference(r);
    cout<<y;
}
