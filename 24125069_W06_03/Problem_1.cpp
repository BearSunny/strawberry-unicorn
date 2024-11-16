// 24125069
// HUYNH KHANH MINH
// 24A01
#include<iostream>
#include<vector>
#include<cstring>
using namespace std;

void countVowelConsonant(char str[]) {
    int count_vowel = 0;
    int count_consonant = 0;
    vector<char> vowels = {'a', 'o', 'u', 'i', 'e', 'A', 'O', 'U', 'I', 'E'};
    for (int i = 0; i < strlen(str); i++) {
        for (char v : vowels) {
            if (str[i] == v) {
                count_vowel += 1;
            }
            else {
                count_consonant += 1;
            }
        }
    }
    cout << "Number of vowels: " << count_vowel << endl;
    cout << "Number of consonants: " << count_consonant << endl;
}