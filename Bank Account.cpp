#include <iostream>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    string accountHolderName;
    double accountBalance;

public:
    BankAccount(string number, string name, double balance) {
        accountNumber = number;
        accountHolderName = name;
        accountBalance = balance;
    }

    void deposit(double amount) {
        accountBalance += amount;
    }

    void withdraw(double amount) {
        if (amount <= accountBalance) {
            accountBalance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Balance: " << accountBalance << endl;
    }
};

int main() {
    BankAccount account("100065937598", "Sifen Iyasu", 1000.0);

    account.displayAccount();

    account.deposit(500.0);
    account.withdraw(200.0);

    account.displayAccount();

    return 0;
}
