// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 
// Output: 

// Test case 2
// Input: 
// Output: 

// Test case 3
// Input: 
// Ouput: 

#include <iostream>
using namespace std;

int main() {
    float persons, previous, current;
    float bill = 0;
    cout << "Enter persons, previous and current: ";
    cin >> persons >> previous >> current;

    float con = current - previous;
    if (con > 6) {
        bill += (con - 6) * 7000;
        con = 6;
    }
    if (con > 4) {
        bill += (con - 4) * 5200;
        con = 4;
    }
    bill += con * 3300;
    float res = bill * persons * 1.1;
    cout << static_cast<int> (res) << endl;
}