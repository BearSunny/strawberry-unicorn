// 24125069
// Huynh Khanh Minh
// 24A01

// Test case 1
// Input: 1 1 4 4 2 3
// Output: C thuộc hình chữ nhật.

// Test case 2
// Input: 2 3 5 6 6 7
// Output: C không thuộc hình chữ nhật.

// Test case 3
// Input: 2 4 5 7 1 4
// Ouput: C không thuộc hình chữ nhật.

#include <iostream>
using namespace std;

int main() {
    int Ax, Ay, Bx, By, Cx, Cy;

    cout << "Nhập tọa độ điểm A (x y) và B (x y): ";
    cin >> Ax >> Ay >> Bx >> By;

    cout << "Nhập tọa độ điểm C (x y): ";
    cin >> Cx >> Cy;

    int minX = min(Ax, Bx);
    int maxX = max(Ax, Bx);
    int minY = min(Ay, By);
    int maxY = max(Ay, By);

    if (Cx >= minX && Cx <= maxX && Cy >= minY && Cy <= maxY) {
        cout << "C thuộc hình chữ nhật." << endl;
    } else {
        cout << "C không thuộc hình chữ nhật." << endl;
    }

    return 0;
}

