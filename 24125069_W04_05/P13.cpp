// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 2024
// Output: 2024 is a leap year

// Test case 2
// Input: 2006
// Output: 2006 is not a leap year

// Test case 3
// Input: 1922
// Ouput: 1922 is not a leap year

#include <iostream>
#include "Functions.h"
using namespace std;

int main() {
    int year;
    cout << "Enter a year: ";
    cin >> year;

    if (leapYear(year)) {
        cout << year << " is a leap year" << endl;
    }
    else {
        cout << year << " is not a leap year" << endl;

    }
}
