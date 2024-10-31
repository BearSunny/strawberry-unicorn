#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int rev = 0;
    int num;
    int n;
    cout << "Number: ";
    cin >> num;
    n = num;

    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }

    if (rev == n && n > 0) {
        cout << n << " is a palindrome" << endl;
    }
    else {
        cout << n << " is not a palindrome" << endl;
    }
}