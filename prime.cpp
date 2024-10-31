#include <iostream>
#include <cmath>
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
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;
    for (int i = 2; i <= x; i++) {
        if (prime(i)) {
            cout << i << " ";
        }
    }
    cout << endl;
}