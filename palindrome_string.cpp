#include <iostream>
#include <cstring>
using namespace std;

void reverseString(char str[], char res[]) {
    int m = strlen(str);
    for (int i = 0; i < m; i++) {
        res[i] = str[m - 1 - i];
    }
    res[m] = '\0';
}

int main() {
    char str[100];
    char reverse[100];
    cout << "Enter a string: ";
    cin.get(str, 100, '\n');

    reverseString(str, reverse);
    if (strcmp(str, reverse) == 0) {
        cout << "This is a palindrome" << endl;
    }
    else {
        cout << "This is not a palindrome" << endl;
    }
}