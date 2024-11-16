// 24125069
// HUYNH KHANH MINH
// 24A01
#pragma once
#include <string>
#include "Transaction.h"
using namespace std;

struct Account{
    string name;
    string number;
    int balance;
    Transaction transactions[10000];
};

Account createAccount(string name, string accountNumber);
void deposit(Account &account, int amount);
void withdraw(Account &account, int amount);
void transfer(Account &sender, Account &receiver, int amount);
void viewTransactionHistory(const Account &account);
int findAccountByNumber(vector<Account> &accounts, string accountNumber); 
