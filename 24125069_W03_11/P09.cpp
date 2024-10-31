// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 1 -5 4
// Output: 1.00 4.00

// Test case 2
// Input: 4 -5 1
// Output: 0.25 1.00

// Test case 3
// Input: 2 2 1
// Ouput: No real roots

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    float a, b, c;
    float delta;
    float res1 = 0, res2 = 0;

    cout << "Enter three real numbers: ";
    cin >> a >> b >> c;
    
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        res1 = (-b - sqrt(delta)) / (2 * a);
        res2 = (-b + sqrt(delta)) / (2 * a);
        cout << fixed << setprecision(2);
        cout << "Result: " << res1 << " " << res2 << endl;
    }
    else if (delta == 0) {
        res1 = (-b) / (2 * a);
        cout << fixed << setprecision(2);
        cout << "Result: " << res1 << endl;
    }
    else {
        cout << "No real roots" << endl;
    }
}