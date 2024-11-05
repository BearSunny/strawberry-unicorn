#include <iostream>
#include <cstring>
using namespace std;

/*
void reverseString(char str[]) {
    int m = strlen(str);
    for (int i = 0; i < m / 2; i++) {
        char temp = str[i];
        str[i] = str[m - 1 - i];
        str[m - 1 - i] = temp;
    }
}
*/

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
    cout << "Reversed string: " << reverse << endl;
}