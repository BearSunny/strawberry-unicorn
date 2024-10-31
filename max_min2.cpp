#include <iostream>
#include <vector>
#include <string>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int num;
    vector<int> nums;
    int maximum = 0, minimum;
    bool flag = true;
    cout << "Numbers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        nums.push_back(num);
        if (flag) {
            minimum = maximum = num;
            flag = false;
        }
        else {
            maximum = max(maximum, num);
            minimum = min(minimum, num);
        }
    }
    
    for (int n : nums) {
        if (n != maximum && n != minimum) {
            cout << n << " ";
        }
    }
    cout << endl;
}