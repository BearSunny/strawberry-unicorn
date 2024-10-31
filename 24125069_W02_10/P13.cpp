// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 7.00 8.00 9.00
// Output: 24.00 26.83

// Test case 2
// Input: 6.00 7.00 8.00
// Output: 21.00 20.33

// Test case 3
// Input: 21.00 17.00 10.00
// Output: 48.00 84.00

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double edge1, edge2, edge3;
    double perimeter, area, s;

    cout << "Input edge1: ";
    cin >> edge1;
    cout << "Input edge2: ";
    cin >> edge2;
    cout << "Input edge3: ";
    cin >> edge3;

    perimeter = edge1 + edge2 + edge3;
    s = perimeter / 2;
    area = area = sqrt(s * (s -edge1) * (s-edge2) * (s-edge3));

    cout << fixed << setprecision(2);
    cout << "Perimeter of triangle: " << perimeter << endl;
    cout << "Area of triangle: " << area << endl;
    return 0;
}