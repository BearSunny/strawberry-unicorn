// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 4 2
// Output: 4

// Test case 2
// Input: 19 5
// Output: 19

// Test case 3
// Input: -2 5
// Ouput: 5

#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int a, b;
    cout << "Please enter integer 1: ";
    cin >> a;
    cout << "Please enter integer 2: ";
    cin >> b;
    if (compare(a, b)) {
        cout << a << endl;
    }
    else {
        cout << b << endl;
    }
}