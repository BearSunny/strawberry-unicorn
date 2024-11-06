#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if (n < 2) return false;
    else {
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    int num;
    int nums[100];
    int count = 0;
    int maximum = 0, minimum;
    bool flag = true;
    cout << "Numbers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        nums[count++] = num;
        if (flag) {
            minimum = maximum = num;
            flag = false;
        }
        else {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
        }
    }
    
    cout << "Maximum: " << maximum << endl;
    cout << "Minimum: " << minimum << endl;
    cout << "Prime: ";
    for (int i = 0; i < count; i++) {
        if (prime(nums[i])) {
            cout << nums[i] << " ";
        }
    }
    cout << endl;
}