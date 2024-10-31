#include <iostream>
#include <cstring>
using namespace std;

void replaceSubstrings(char str[], const char str1[], const char str2[], char result[]) {
    int strLen = strlen(str);
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);

    int i = 0, j = 0;
    while (i < strLen) {
        bool match = true;
        for (int k = 0; k < str1Len; k++) {
            if (str[i + k] != str1[k]) {
                match = false;
                break;
            }
        }

        if (match) {
            for (int m = 0; m < str2Len; m++) {
                result[j++] = str2[m];
            }
            i += str1Len;
        } else {
            result[j++] = str[i++];
        }
    }
    result[j] = '\0'; // Null-terminate the resulting string
}

int main() {
    char str[100];
    char str1[100];
    char str2[100];
    char result[200]; // Ensure this is large enough to hold the result

    cout << "Enter the main string: ";
    cin.get(str, 100, '\n');
    cin.ignore(); // Clear the input buffer

    cout << "Enter the substring to find: ";
    cin.get(str1, 100, '\n');
    cin.ignore();

    cout << "Enter the substring to replace with: ";
    cin.get(str2, 100, '\n');

    replaceSubstrings(str, str1, str2, result);
    cout << "Resulting string: " << result << endl;

    return 0;
}
