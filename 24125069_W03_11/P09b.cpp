// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 15
// Output: 2004310016

// Test case 2
// Input: 10
// Output: 3628800

// Test case 3
// Input: 3
// Ouput: 6

#include <iostream>
using namespace std;

int main() {
    int n;
    int res = 1;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    cout << res << endl;
}
