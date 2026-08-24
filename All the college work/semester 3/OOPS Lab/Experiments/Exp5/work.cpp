#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;  

public:
    BankAccount(int accNo, double bal) {
        accountNumber = accNo;
        balance = bal;
    }

    void deposit(double amount) {
        if (amount > 0)
            balance=balance+amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance=balance-amount;
        else
            cout << "Insufficient balance or invalid amount."<<endl;
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    int accno;
    cout<<"Enter the bank account number: "<<endl;
    cin>>accno;

    double bal;
    cout<<"Enter the balance of the account: "<<endl;
    cin>>bal; 

    BankAccount acc(accno,bal);

    acc.deposit(2000);
    acc.withdraw(1500);
    cout<<endl;
    acc.display();

    return 0;
}