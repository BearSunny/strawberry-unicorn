// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 250000 60
// Output: 416666.67

// Test case 2
// Input: 360000 40
// Output: 900000.00

// Test case 3
// Input: 345200 40
// Output: 863000.00

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double percent, quota, max;
    cout << "Enter quota: ";
    cin >> quota;
    cout << "Enter percent: ";
    cin >> percent;

    max = quota / (percent/100);
    cout << fixed << setprecision(2);
    cout << "Spending: " << max << endl;
}