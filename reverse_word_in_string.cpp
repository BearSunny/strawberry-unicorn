#include <iostream>
#include <cstring> // for strlen
using namespace std;

// Helper function to reverse characters in a substring
void reverse(char* str, int start, int end) {
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

// Function to remove extra spaces from the string
int removeExtraSpaces(char* str) {
    int length = strlen(str);
    int index = 0;

    // Remove leading spaces
    while (str[index] == ' ') {
        index++;
    }
    
    int dest = 0;
    bool spaceEncountered = false;

    for (int i = index; i < length; ++i) {
        if (str[i] != ' ') {
            str[dest++] = str[i];
            spaceEncountered = false;
        } else if (!spaceEncountered) { 
            str[dest++] = ' ';
            spaceEncountered = true;
        }
    }

    // Remove trailing space if it exists
    if (dest > 0 && str[dest - 1] == ' ') {
        dest--;
    }

    str[dest] = '\0'; // Null-terminate the new string
    return dest;
}

int main() {
    char str[] = "i     go";

    // Step 1: Remove extra spaces
    int newLength = removeExtraSpaces(str);

    // Step 2: Reverse the entire cleaned-up string
    reverse(str, 0, newLength - 1);

    // Step 3: Reverse each word within the reversed string
    int word_start = 0;
    for (int i = 0; i <= newLength; ++i) {
        // When we reach a space or the end of the string, reverse the word
        if (str[i] == ' ' || str[i] == '\0') {
            reverse(str, word_start, i - 1);
            word_start = i + 1;
        }
    }

    cout << "Reversed words: \"" << str << "\"" << endl;

    return 0;
}
