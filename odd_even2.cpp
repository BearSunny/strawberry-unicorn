#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int countDigits(int num) {
    int count = 0;
    while (num > 0) {
        count += 1;
        num /= 10;
    }
    return count;
}

int extractOdd(int num) {
    int numDigits = countDigits(num);
    int result = 0;

    for (int i = 1; i <= numDigits; i++) {
        int divisor = pow(10, numDigits - i); // -i
        int digit = (num / divisor) % 10;

        if (i % 2 != 0) {
            result = result * 10 + digit;
        }
    }
    return result;
}

int extractEven(int num) {
    int numDigits = countDigits(num);
    int result = 0;

    for (int i = 1; i <= numDigits; i++) {
        int divisor = pow(10, numDigits - i); // -i
        int digit = (num / divisor) % 10;

        if (i % 2 == 0) {
            result = result * 10 + digit;
        }
    }
    return result;
}

int main() {
    int num;
    vector<int> numbers;
    int totalSum = 0;

    cout << "Enter positive integers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        numbers.push_back(num);
    }

    for (int i = 0; i < numbers.size(); i++) {
        if ((i + 1) % 2 != 0) {
            totalSum += extractOdd(numbers[i]);
        }
        else {
            totalSum += extractEven(numbers[i]);
        }
    }
    cout << "Sum: " << totalSum << endl;
}