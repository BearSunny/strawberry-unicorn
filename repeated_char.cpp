#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100);

    int charCount[256] = {0};
    for (int i = 0; i < strlen(str); i++) {
        charCount[str[i]] += 1;
    }

    for (int i = 0; i < 256; i++) {
        if (charCount[i] > 1) {
            cout << (char)i << " ";
        }
    }
    cout << endl;
}