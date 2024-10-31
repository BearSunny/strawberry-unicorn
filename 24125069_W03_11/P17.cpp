// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 1 4
// Output: 1.71

// Test case 2
// Input: 2 1
// Output: 2.00

// Test case 3
// Input: 3 5
// Ouput: 17.40

#include <iostream>
#include <iomanip>
using namespace std;

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int n, x;
    float sum = 0.0;
    cout << "Enter two positive integer: ";
    cin >> x >> n;
    float term = x;
    for (int i = 1; i <= n; i++) {
        sum += term / factorial(i);
        term *= x;
    }
    cout << fixed << setprecision(2) << sum << endl;
}