// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 12759
// Output: 4

// Test case 2
// Input: 23692
// Output: 2

// Test case 3
// Input: 35874
// Output: 7

#include <iostream>
using namespace std;

int main() {
    int plate;
    int rem;
    int res = 0;
    cout << "Please enter a 5-digit registration plate: ";
    cin >> plate;
    while (plate > 0) {
        rem = plate % 10;
        res += rem;
        plate = plate / 10;
    }
    cout << "The nut of license plate number is: " << res % 10 << endl;
}