#include <iostream>
#include <string>
#include <vector>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    vector<string> count_string;
    int count = 0;
    cout << "Enter a string: ";
    cin.get(str, 100, '\n');
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] != ' ' && (i == 0 || str[i - 1] == ' ')) {
        }
    }
    cout << "Word count: " << count << endl;
}

