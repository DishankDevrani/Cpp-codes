#include <iostream>
using namespace std;

int main() {
    float basicSalary, DA, HRA, grossSalary, PF, netSalary;

    
    cout << "Enter the Basic Salary: ";
    cin >> basicSalary;

    
    DA = 0.25 * basicSalary;   
    HRA = 0.15 * basicSalary;  

    
    grossSalary = basicSalary + DA + HRA;

    
    PF = 0.10 * grossSalary;   

    netSalary = grossSalary - PF;

    
    
    cout << "Net Salary: " << netSalary << endl;

    return 0;
}
