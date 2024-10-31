// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 55
// Output: 1 5 11 55

// Test case 2
// Input: 122
// Output: 1 2 61 122

// Test case 3
// Input: 17
// Ouput: 1 17

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int sum = 0;
    vector<int> nums;
    cout << "Enter a positive integer: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            if (i % 2 != 0) {
                cout << i << " " << endl;
            }
            else {
                sum += i;
                cout << sum << endl;
            }
            nums.push_back(i);
        }
    }
    cout << nums.size() << endl;
}