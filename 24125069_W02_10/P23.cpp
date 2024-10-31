// 24125069
// Huynh Khanh Minh

// Test case 1
// Input: 4 15
// Output: 374.03

// Test case 2
// Input: 34 2
// Output: 1507.97

// Test case 3
// Input: 12 13
// Output: 452.39

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double edge, radius, area_triangle, area_circle, area_gray_region;
    cout << "Enter the edge of an equilateral triangle: ";
    cin >> edge;
    cout << "Enter the radius of a circle: ";
    cin >> radius;

    area_triangle = ((sqrt(3) / 4) * pow(edge, 2)) * 3;
    area_circle = 3.14 * pow(radius, 2);
    area_gray_region =(area_triangle + area_circle) - ((area_circle / 6)*3);
    cout << fixed << setprecision(2);
    cout << "Area of gray region: " << area_gray_region << endl;
}