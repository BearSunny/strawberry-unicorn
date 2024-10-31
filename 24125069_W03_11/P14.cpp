// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 7 2003
// Output: 31

// Test case 2
// Input: 2 1928
// Output: 29

// Test case 3
// Input: 4 2005
// Ouput: 30

#include <iostream>
using namespace std;

int main() {
    int month, year;
    cout << "Enter a month and a year: ";
    cin >> month >> year;

    if (month != 2) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        {
            cout << "31" << endl;
        }
        else {
            cout << "30" << endl;
        }
    }
    else {
        if (year % 400 == 0) {
            cout << "29" << endl;
        }
        else if (year % 100 == 0) {
            cout << "28" << endl;
        }
        else if (year % 4 == 0) {
            cout << "29" << endl;
        }
        else {
            cout << "28" << endl;
        }
    }       
}