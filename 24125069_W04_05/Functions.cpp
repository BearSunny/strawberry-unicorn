#include <iostream>
#include <iomanip>
#include <vector>
#include "Functions.h"

using namespace std;

bool compare(int a, int b) {
    if (a > b) {
        return true;
    }
    else {
        return false;
    }
}

float score(float a, float b, float c) {
    float res = 0.3 * a + 0.3 * b + 0.4 * c;
    return res;
}

int sum(int& n) {
    int sum = 0;
     for (int i = 1; i <= n; i++) {
        sum += i * i;
    }
    return sum;
}

bool leapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void divisor(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " " << endl;
    }
    }
}