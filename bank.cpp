#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = initialBalance;
    }

    // Getter for accountHolder
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for accountHolder
    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    // Getter for balance
    double getBalance() {
        return balance;
    }

    // Setter for balance
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Balance cannot be negative!" << endl;
        }
    }

    // Method to deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Deposit amount must be positive!" << endl;
        }
    }

    // Method to withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Invalid withdrawal amount!" << endl;
        }
    }
};

int main() {
    // Create a BankAccount object
    BankAccount myAccount("John Doe", 1000.0);

    // Display initial account information
    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;
    cout << "Balance: $" << myAccount.getBalance() << endl;

    // Make some transactions
    myAccount.deposit(500.0);
    cout << "Balance after deposit: $" << myAccount.getBalance() << endl;

    myAccount.withdraw(200.0);
    cout << "Balance after withdrawal: $" << myAccount.getBalance() << endl;


    return 0;
}