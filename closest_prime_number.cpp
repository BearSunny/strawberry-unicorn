#include <iostream>
using namespace std;

bool prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    cout << "Enter a positive integer: ";
    cin >> N;
    for (int i = N; i >= 2; i--) {
        if (prime(i)) {
            cout << "Closest prime number: " << i << endl;
            break;
        }
    }
}