// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 3 103 250
// Output: 1131900

// Test case 2
// Input: 5 66 105
// Output: 300300

// Test case 3
// Input: 4 21 50
// Ouput: 223300

#include <iostream>
using namespace std;

int main() {
    float persons, previous, current;
    float bill = 0;
    cout << "Enter persons, previous and current: ";
    cin >> persons >> previous >> current;

    float con = (current - previous) / persons;
    if (con > 6) {
        bill = con * 7000;
    }
    else if (con > 4) {
        bill = con * 5200;
    }
    else if (con <= 4) {
        bill = con * 3300;
    }
    float res = bill * persons * 1.1;
    cout << static_cast<int> (res + 0.5) << endl;
}