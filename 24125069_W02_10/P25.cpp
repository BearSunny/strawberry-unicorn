// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 23.45 2 43 35.6
// Output: 8.60 6.98

// Test case 2
// Input: 35.67 1 56 40.5
// Output: 18.34 3.27

// Test case 3
// Input: 89.22 7 55 32.2
// Output: 11.26 5.33

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    float km, hour, minute, second;
    float speed, pace;
    cout << "Enter distance: ";
    cin >> km;
    cout << "Enter hour: ";
    cin >> hour;
    cout << "Enter minute: ";
    cin >> minute;
    cout << "Enter second: ";
    cin >> second;

    speed = km / (hour + minute/60 + second/3600);
    pace = (hour * 60 + minute + second / 60) / km;
    cout << fixed << setprecision(2);
    cout << "Speed: " << speed << endl;
    cout << "Pace: " << pace << endl;
}