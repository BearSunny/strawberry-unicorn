#include <iostream>
#include <limits.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        int digit = 0;

        while (x != 0) {
            digit = x % 10;

            if (reverse > INT_MAX / 10 || (reverse == INT_MAX / 10 && digit > 7)) {
                return 0;
            }
            if (reverse < INT_MIN / 10 || (reverse == INT_MIN / 10 && digit < -8)) {
                return 0;
            }

            reverse = reverse * 10 + digit;
            x /= 10;
        }
        return reverse;
    }
};