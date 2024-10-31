#include <iostream>
#include <string>
using namespace std;

bool isIncreasing(const string& num) {
    for (int i = 1; i < num.length(); i++) {
        if (num[i] < num[i - 1]) {
            return false;
        }
    }
    return true;
}

bool isDecreasing(const string& num) {
    for (int i = 1; i < num.length(); i++) {
        if (num[i] > num[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    string num = "";
    cout << "Number: ";
    getline(cin, num);

    if (isIncreasing(num)) {
        cout << "The digits are in increasing order." << endl;
    } else if (isDecreasing(num)) {
        cout << "The digits are in decreasing order." << endl;
    } else {
        cout << "The digits are neither strictly increasing nor decreasing." << endl;
    }

    return 0;
}
