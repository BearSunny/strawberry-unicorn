// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 8 50000
// Output: 440000

// Test case 2
// Input: 12 45000
// Output: 594000

// Test case 3
// Input: 30 25000
// Output: 825000

#include <iostream>
using namespace std;

int main() {
    int quant;
    float price;
    float total;

    cout << "Please enter a quantity: ";
    cin >> quant;
    cout << "Please enter unit price: ";
    cin >> price;
    total = (quant * price) * 1.1;
    cout << "Total: " << total << endl;
    return 0;
}