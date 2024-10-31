#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

int main() {
    char str[100];
    int count = 0;
    vector<char> vowels = {'a', 'o', 'u', 'i', 'e'};
    cout << "Enter a string: ";
    cin.get(str, 100, '\n');

    for (int i = 0; i < strlen(str); i++) {
        for (char v : vowels) {
            if (str[i] == v) {
                count += 1;
            }
        }
    }
    cout << "Number of vowels: " << count << endl;
}