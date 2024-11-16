// 24125069
// HUYNH KHANH MINH
// 24A01
#include <ctime>
#include <string>
#include <vector>
#include <iostream>
#include "Transaction.h"
#include "Account.h"
using namespace std;

string getCurrentDate() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    return to_string(1900 + ltm->tm_year) + "-" +
    to_string(1 + ltm->tm_mon) + "-" +
    to_string(ltm->tm_mday);
}

Account createAccount(string name, string accountNumber) {
    Account account; 
    account.name = name; 
    account.number = accountNumber; 
    account.balance = 0; 
    return account;
}

void deposit(Account &account, int amount) {
    account.balance += amount;
}

void withdraw(Account &account, int amount) {
    if (amount > account.balance) {
        cout << "Amount exceeds balance!" << endl;
    }
    account.balance -= amount;
}

void transfer(Account &sender, Account &receiver, int amount) {
    int i = 0;
    if (amount > sender.balance) {
        cout << "Amount exceeds balance!" << endl;
    }
    sender.balance -= amount;
    receiver.balance += amount;
    sender.transactions[i].description = "Outgoing account: Transfer to " + (string) sender.number;
    receiver.transactions[i].description = "Incoming account: Transfer from " + (string) receiver.number;
}

void viewTransactionHistory(const Account &account) {
    cout << "Account name: " << account.name << endl;
    cout << "Account number: " << account.number << endl;
    cout << "Balance: " << account.balance << endl;
    for (int i = 0; i < 10000; i++) {
        cout << account.transactions[i].description;
    }
}

int findAccountByNumber(vector<Account> &accounts, string accountNumber) {   
    int index = -1;
    for (int i = 0; i < accounts.size(); i++) {
        if (accounts[i].number == accountNumber) {
            index = i;
        }
    }
    return index;
}