//Design a class for hospital management. Function should include admit and discharge function


#include <iostream>
#include <string>
using namespace std;

class Hospital {
private:
    string patientName;
    int patientId;
    bool admitted;

public:
    
    Hospital(string name, int id) {
        patientName = name;
        patientId = id;
        admitted = false;
    }

    
    void admit() {
        if (!admitted) {
            admitted = true;
            cout << "Patient admitted successfully." << endl;
        } else {
            cout << "Patient is already admitted." << endl;
        }
    }

    
    void discharge() {
        if (admitted) {
            admitted = false;
            cout << "Patient discharged successfully." << endl;
        } else {
            cout << "Patient is not admitted." << endl;
        }
    }

    
    void display() {
        cout << "Patient Name: " << patientName << endl;
        cout << "Patient ID: " << patientId << endl;
        cout << "Status: " << (admitted ? "Admitted" : "Discharged") << endl;
    }
};

int main() {
    string name;
    cout<<"Enter the name of the patient: "<<endl;
    getline(cin,name);
    cin.ignore();

    int id;
    cout<<"Enter patient ID: "<<endl;
    cin>>id;
    cout<<endl;
     
    Hospital patient(name,id);

    patient.admit();
    patient.display();

    patient.discharge();
    patient.display();

    return 0;
}