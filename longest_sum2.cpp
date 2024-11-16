#include <iostream>
using namespace std;

long long sumLongest(int a[], int n) {
    int longest_sum = a[0];
    int incr_sum = a[0];
    int decr_sum = a[0];
    int decr_length = 1;
    int incr_length = 1;
    int longest_length = 1;

    for (int i = 1; i <= n; i++) {
        if (a[i - 1] < a[i]) {
            incr_sum += a[i];
            incr_length += 1;
            decr_sum = a[i];
            decr_length = 1;
        } 
        else if (a[i - 1] > a[i]) {
            decr_length += 1;
            decr_sum += a[i];
            incr_length = 1;
            incr_sum = a[i];
        }
        else {
            decr_sum += a[i];
            incr_sum += a[i];
            incr_length = 1;
            decr_length = 1;
        }

        if (incr_length > longest_length) {
            longest_length = incr_length;
            longest_sum = incr_sum;
        }
        // If length is the same, get the bigger sum
        if (decr_length > longest_length) {
            longest_sum = decr_sum;
            longest_length = decr_length;
        }
    }
    return longest_sum;
}

int main() {
    int num;
    int count = 0;
    int numbers[1000];
    cout << "Input integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers[count++] = num;
    }
    cout << "Sum: " << sumLongest(numbers, count) << endl;
}