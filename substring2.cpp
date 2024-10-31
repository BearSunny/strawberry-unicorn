#include <iostream>
#include <cstring>
using namespace std;

bool isSubstring(const char str1[], const char str2[]) {
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    for (int i = 0; i <= str1Len - str2Len; i++) {
        bool match = true;
        for (int k = 0; k < str2Len; k++) {
            if (str1[i + k] != str2[k]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true; // str2 is a substring of str1
        }
    }
    return false; // str2 is not a substring of str1
}

int main() {
    char str1[100];
    char str2[100];

    cout << "Enter the main string (str1): ";
    cin.get(str1, 100, '\n');
    cin.ignore(); // Clear the input buffer

    cout << "Enter the substring to find (str2): ";
    cin.get(str2, 100, '\n');

    if (isSubstring(str1, str2)) {
        cout << "str2 is a substring of str1." << endl;
    } else {
        cout << "str2 is not a substring of str1." << endl;
    }

    return 0;
}
