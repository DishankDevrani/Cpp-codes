 #include <iostream>
 using namespace std;
 int main() {
    int choice;
    cout<<"Enter your choice between 1 and 10: ";
    cin>>choice;
    switch(choice)
    {
        case 1:
        cout<<"The number is ONE";
        break;

        case 2:
        cout<<"The number is TWO";
        break;

        case 3:
        cout<<"The number is THREE";
        break;
        
        case 4:
        cout<<"The number is FOUR";
        break;

        case 5:
        cout<<"The number is FIVE";
        break;

        case 6:
        cout<<"The number is SIX";
        break;

        case 7:
        cout<<"The number is SEVEN";
        break;

        case 8:
        cout<<"The number is EIGHT";
        break;

        case 9:
        cout<<"The number is NINE";
        break;
        
        case 10:
        cout<<"The number is TEN";
        break;



        default:
        cout<<"sorry your number is outside of the range";;
    }
    return 0;
    }







    
