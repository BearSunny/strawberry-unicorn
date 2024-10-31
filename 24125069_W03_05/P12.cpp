// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 8.5 5 6 0
// Output: 6.4 PASSED

// Test case 2
// Input: 9 8.5 9.5 1
// Output: 9.1 FAILED

// Test case 3
// Input: 5 4 3 0
// Ouput: 3.9 FAILED

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float assignment, lab, final;
    float res;
    int cheat;
    cout << "Enter assignment score: ";
    cin >> assignment;
    cout << "Enter lab score: ";
    cin >> lab;
    cout << "Enter final score: ";
    cin >> final;
    cout << "Cheat or not? (0 for no, 1 for yes)";
    cin >> cheat;

    res = 0.3 * assignment + 0.3 * lab + 0.4 * final;
    if (res >= 5 && cheat == 0) {
        cout << fixed << setprecision(1);
        cout << res << " PASSED" << endl;
    }
    else if (res < 5 || cheat == 1) {
        cout << fixed << setprecision(1);
        cout << res << " FAILED" << endl;
    }
}