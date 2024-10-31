#include <iostream>
#include <cstring>
using namespace std;

const int MAX = 1000; // Maximum length for the strings

char* longestCommonSubstring(char str1[], char str2[]) {
    int m = strlen(str1);
    int n = strlen(str2);
    
    // Initialize a DP table
    int dp[MAX + 1][MAX + 1] = {0}; // Adjust size if necessary
    int maxLength = 0;
    int endIndex = 0; // Ending index of the longest common substring in str1

    // Fill the DP table
    for (int i = 1; i <= m; ++i) {
        for (int j = 1; j <= n; ++j) {
            if (str1[i - 1] == str2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
                if (dp[i][j] > maxLength) {
                    maxLength = dp[i][j];
                    endIndex = i; // Update endIndex to the current position in str1
                }
            } else {
                dp[i][j] = 0;
            }
        }
    }

    // Extract the longest common substring
    static char result[MAX];
    if (maxLength > 0) {
        strncpy(result, &str1[endIndex - maxLength], maxLength);
        result[maxLength] = '\0'; // Null-terminate the result
    } else {
        result[0] = '\0'; // No common substring found
    }
    
    return result;
}

int main() {
    char str1[100];
    char str2[100];
    cout << "String 1: ";
    cin.get(str1, 100, '\n');
    cin.ignore();

    cout << "String 2: ";
    cin.get(str2, 100, '\n');

    char* result = longestCommonSubstring(str1, str2);
    cout << "Longest Common Substring: " << result << endl;

    return 0;
}
