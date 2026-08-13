#include<iostream>
using namespace std;
int counter = 0; //Global decl.
class Greeter{   // Class def
    public:
    void hello(){
        cout << "hi";
    }
};
int main (){   // Entry Point 
    Greeter g; //Statements
    g.hello();
    return 0;   //Return
}