// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 15
// Output: 2.37

// Test case 2
// Input: 56
// Output: 3.00

// Test case 3
// Input: 22
// Ouput: 2.55

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    float sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= 2*n+1; i += 2) {
        sum += 1.0 / i;
    }
    cout << fixed << setprecision(2) << sum << endl;
}