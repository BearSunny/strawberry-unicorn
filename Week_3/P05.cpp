// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 19 3
// Output: 6.33

// Test case 2
// Input: 4 2
// Output: 2.00

// Test case 3
// Input: 7 4
// Output: 1.75

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    double c;
    cout << "Please enter the first number: " << endl;
    cin >> a;
    cout << "Please enter the second number: " << endl;
    cin >> b;
    c = static_cast<double> (a) / b;
    cout << "The division is: " << fixed << setprecision(2) << c << endl;
    return 0;
}