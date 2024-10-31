#include <iostream>
using namespace std;

int main() {
    int num, rev = 0;
    cout << "Enter a positive integer number: ";
    cin >> num;
    while (num > 0) {
        rev = rev * 10 + (num % 10);
        num = num / 10;
    }
    cout << "Result: " << rev << endl;
}