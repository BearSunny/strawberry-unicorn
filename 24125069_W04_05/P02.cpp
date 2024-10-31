// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 54
// Output: 53955

// Test case 2
// Input: 2
// Output: 5

// Test case 3
// Input: 13
// Ouput: 819

#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int n;
    int res = 0;
    cout << "Enter an integer: ";
    cin >> n;

    res = sum(n);
    cout << "Result: " << res << endl;
}