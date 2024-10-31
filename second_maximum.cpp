#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i, maximum = 0, second_maximum = 0;
    while (true) {
        cout << "Input integer numbers: ";
        cin >> i;
        if (i == 0) break;

        if (i > maximum) {
            second_maximum = maximum;
            maximum = i;
        }
        else if (i > second_maximum && i != maximum) { // For cases where i not larger than maximum
            second_maximum = i;
        }
    }
    cout << "The second largest value is: " << second_maximum << endl;
}