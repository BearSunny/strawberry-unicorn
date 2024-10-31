// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 3 4
// Output: 7380.00

// Test case 2
// Input: 1 4
// Output: 4.00

// Test case 3
// Input: 2 5
// Ouput: 1364.00

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, x;
    float sum = 0.0;
    float term = 1;
    cout << "Enter two positive integer: ";
    cin >> x >> n;

    for (int i = 1; i <= n; i++) {
        term *= x * x; // x^(2i)
        sum += term;
    }
    cout << fixed << setprecision(2) << sum << endl;
}