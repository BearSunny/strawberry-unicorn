// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 2361000
// Output: 4 1 1 1 0 1 0 0 1

// Test case 2
// Input: 5654000
// Output: 11 0 1 1 0 0 0 2 0

// Test case 3
// Input: 23450000
// Output: 46 2 0 1 0 0 0 0 0

#include <iostream>
using namespace std;

int main() {
    int denominations[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int count[9] = {0};
    int num;
    cout << "Enter your money: ";
    cin >> num;

    for (int i = 0; i < 9; i++) {
        count[i] = num / denominations[i];
        num = num % denominations[i];
    }
    for (int i = 0; i < 9; i++) {
            cout << "Denomination " << denominations[i] << ": " << count[i] << endl;
        }
    return 0;
}