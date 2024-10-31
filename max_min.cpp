#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

bool prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i, maximum = 0, minimum; 
    bool flag = true;  
    vector<int> primes;
    cout << "Input integer numbers: ";
    while (true) {
        cin >> i;
        if (i == 0) break;
        if (flag) {
            maximum = minimum = i;
            flag = false;
        }
        else {
            maximum = max(maximum, i);
            minimum = min(minimum, i);
        }
        if (prime(i)) {
            primes.push_back(i);
        }
    }
    cout << "Max: " << maximum << endl;
    cout << "Min: " << minimum << endl;
    for (int primeNum : primes) {
        cout << "Prime: " << primeNum << " " << endl;
    }
}



