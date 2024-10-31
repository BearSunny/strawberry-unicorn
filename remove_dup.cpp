#include <iostream>
#include <cstring>
using namespace std;

void removeDuplicates(char str[]) {
    int length = strlen(str);
    bool seen[256] = {0};  // Set to false
    int index = 0;  // Index for placing non-duplicate characters
    
    for (int i = 0; i < length; ++i) {
        if (!seen[str[i]]) {  // If character hasn't been seen
            seen[str[i]] = true;
            str[index++] = str[i];  // Place non-duplicate character
        }
    }
    str[index] = '\0';  // Null-terminate the string
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    removeDuplicates(str);

    cout << "String without duplicates: " << str << endl;

    return 0;
}
