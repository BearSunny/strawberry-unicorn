#include <iostream>
#include <cstring>
using namespace std;

void replaceString(char str[], char str1[], char str2[]) {
    char result[100];
    int strLen = strlen(str);
    int str1Len = strlen(str1);
    int str2Len = strlen(str2);
    int i = 0; 
    int j = 0;

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
                result[j++] = str2[m]; // Replace with str2 
            }
            i += str1Len; // Start again from the position after str1
        } else {
            result[j++] = str[i++]; // Replace with str if not matched
        }
        result[j] = '\0';
    }
    str = strcpy(str, result);
}

int main() {
    char str[100];
    char str1[100];
    char str2[100];
    char result[100];

    cout << "Enter the main string: ";
    cin.get(str, 100, '\n');
    cin.ignore();

    cout << "Enter substring to find: ";
    cin.get(str1, 100, '\n');
    cin.ignore();

    cout << "Enter substring to replace: ";
    cin.get(str2, 100, '\n');

    replaceString(str, str1, str2);
    cout << "Resulting string: " << str << endl;

}