// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 24000000 3 4
// Output: 26996736

// Test case 2
// Input: 1200000 1 2
// Output: 1224000

// Test case 3
// Input: 35000000 2 12
// Ouput: 43904000

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float balance, month;
    float rate;
    float res;

    cout << "Enter balance, month and rate: ";
    cin >> balance >> month >> rate;

    res = balance;
    for (int i = 0; i < month; i++) {
        res *= (1 + rate/100);
    }
    cout << static_cast<int> (res) << endl;
}
