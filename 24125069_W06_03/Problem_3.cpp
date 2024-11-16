// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <vector>
#include "Account.h"
#include "Transaction.h"
using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Create Account" << endl;
    cout << "2. Deposit" << endl;
    cout << "3. Withdraw" << endl;
    cout << "4. Transfer" << endl;
    cout << "5. View Transaction History" << endl;
    cout << "0. Exit" << endl;
}

int main() {
    vector<Account> accounts;
    int choice;
    string name, accountNumber;
    double amount;
    string targetAccountNumber;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter account number: ";
                cin >> accountNumber;
                accounts.push_back(createAccount(name, accountNumber));
                break;
            case 2:
                cout << "Enter account number: ";
                cin >> accountNumber;
                cout << "Enter amount to deposit: ";
                cin >> amount;
                {
                    int idx = findAccountByNumber(accounts, accountNumber);
                    if (idx != -1) {
                        deposit(accounts[idx], amount);
                    } else {
                        cout << "Account not found." << endl;
                    }
                }
                break;
            case 3:
                cout << "Enter account number: ";
                cin >> accountNumber;
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                {
                    int idx = findAccountByNumber(accounts, accountNumber);
                    if (idx != -1) {
                        withdraw(accounts[idx], amount);
                    } else {
                        cout << "Account not found." << endl;
                    }
                }
                break;
            case 4:
                cout << "Enter sender account number: ";
                cin >> accountNumber;
                cout << "Enter receiver account number: ";
                cin >> targetAccountNumber;
                cout << "Enter amount to transfer: ";
                cin >> amount;
                {
                    int senderIdx = findAccountByNumber(accounts, accountNumber);
                    int receiverIdx = findAccountByNumber(accounts, targetAccountNumber);
                    if (senderIdx != -1 && receiverIdx != -1) {
                        transfer(accounts[senderIdx], accounts[receiverIdx], amount);
                    } else {
                        cout << "One or both accounts not found." << endl;
                    }
                }
                break;
            case 5:
                cout << "Enter account number: ";
                cin >> accountNumber;
                {
                    int idx = findAccountByNumber(accounts, accountNumber);
                    if (idx != -1) {
                        viewTransactionHistory(accounts[idx]);
                    } else {
                        cout << "Account not found." << endl;
                    }
                }
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);

    return 0;
}
