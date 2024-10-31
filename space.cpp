#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cout << "Enter a string: ";
    cin.get(str, 100, '\n');
    int i = 0;
    int j = 0;
    while (str[i]) {
        if (i == 0 && str[i] == ' ') i++;
        if (str[i] == ' ' && str[i-1] == ' ') i++;
        else {
            str[j] = str[i];
            j++;
            i++;
        }
    }
    str[j] = '\0';
    cout << "String: " << str << endl;
}