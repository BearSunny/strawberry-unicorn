// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 16
// Output: 136

// Test case 2
// Input: 156
// Output: 12246

// Test case 3
// Input: 79
// Ouput: 3160

#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << sum << endl;
}