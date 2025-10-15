#include <iostream>
using namespace std;
int main(){
    cout<<"1,2,3,4,5,6,7 for the weekdays respectively."<<endl;
    int choice;
    cout<<"Enter your choice :"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"Monday"<<endl;
        break;
        case 2:
        cout<<"Tuesday"<<endl;
        break;
        case 3:
        cout<<"Wednesday"<<endl;
        break;
        case 4:
        cout<<"Thursday"<<endl;
        break;
        case 5:
        cout<<"Friday"<<endl;
        break;
        case 6:
        cout<<"Saturday"<<endl;
        break;
        case 7:
        cout<<"Sunday"<<endl;
        break;
        default:
        cout<<"Sorry wrong choice."<<endl;

    }
    return 0;
}