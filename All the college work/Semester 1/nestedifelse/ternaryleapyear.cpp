#include <iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    int check;
    check=year%4;

    string result=(check==0)?("The year is leap year."):("The year is not leap year.");
    cout<<result;
}