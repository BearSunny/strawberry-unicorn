// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 1000 1200
// Output: 200

// Test case 2
// Input: 356 7890
// Output: 7534

// Test case 3
// Input: 56 122
// Output: 66

#include <iostream>
using namespace std;

int main() {
    int prev, cur, con;
    do {
        cout << "Please enter the electricity consumption last month: ";
        cin >> prev;
        cout << "Please enter the electricity consumption this month: ";
        cin >> cur;
        if (prev > cur) {
            cout << "Consumption last month is greater than this month. Please enter a valid number." << endl;
        }
    } while (prev > cur);
    con = cur - prev;
    cout << "Your consumption: " << con << endl;
    return 0;
}