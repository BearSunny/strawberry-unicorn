#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>& v) {
    int n = v.size();
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j+1]);
                flag = true;
            }
        }
        if (!flag) break;
    }
}

int main() {
    int num;
    vector<int> v = {};
    cout << "Input: " << endl;
    while (true) {
        cin >> num;
        if (num == 0) break;
        v.push_back(num);
    }

    bubbleSort(v);
    cout << "Sorted: " << endl;
    for (auto i : v) {
        if (i != 0) {
        cout <<  i << " ";
        }
    }
    cout << endl;
}