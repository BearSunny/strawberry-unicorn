#include <iostream>
using namespace std;

int main() {
    int incr_length = 1;
    int decr_length = 1;
    int longest_length = 1;

    int numbers[100];
    int count = 0;
    cout << "Enter positive integers: ";
    while (true) {
        int num;
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }

    int longest_sum = numbers[0];
    int incr_sum = numbers[0];
    int decr_sum = numbers[0];

    for (int i = 1; i <= count; i++) {
        if (numbers[i] > numbers[i - 1]) {
            incr_length += 1;
            incr_sum += numbers[i];
            decr_length = 1;
            decr_sum = numbers[i];
        }

        else if (numbers[i] < numbers[i - 1]) {
            decr_length += 1;
            decr_sum += numbers[i];
            incr_length = 1;
            incr_sum = numbers[i];
        }

        else {
            incr_length = 1;
            decr_length = 1;
            incr_sum += numbers[i];
            decr_sum += numbers[i];
        }
        
        if (incr_length > longest_length) {
            longest_length = incr_length;
            longest_sum = incr_sum;
        }
        if (decr_length > longest_length) {
            longest_length = decr_length;
            longest_sum = decr_sum;
        }
    }
    cout << "Sum: " << longest_sum << endl;
}