// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 55
// Output: 1 5 11 55

// Test case 2
// Input: 122
// Output: 1 2 61 122

// Test case 3
// Input: 17
// Ouput: 1 17

#include <iostream>
#include <vector>
#include "Functions.h"
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    divisor(n);
    return 0;
}