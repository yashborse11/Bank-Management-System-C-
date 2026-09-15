#include <iostream>
using namespace std;

class BankAccount {
    int accountNumber;
    string name;
    double balance;
public:
    BankAccount(int accNo, string accName, double bal) {
        accountNumber = accNo;
        name = accName;
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << ", New Balance: " << balance << endl;
    }
    void withdraw(double amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << ", New Balance: " << balance << endl;
        } else {
            cout << "Insufficient balance!\n";
        }
    }
    void display() {
        cout << "Account No: " << accountNumber << ", Name: " << name << ", Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc(101, "Yash", 5000);
    acc.display();
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.display();
    return 0;
}
