#include <iostream>
#include <iomanip>
#include <cmath>
#include "Functions.h"
using namespace std;

void sum(int& n, ostream &output) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    output << "Sum: " << sum << endl;
}

void sum2(int& n, ostream &output) {
    float sum = 0;
    for (int i = 1; i <= 2*n+1; i += 2) {
        sum += 1.0 / i;
    }
    output << "Sum: " << fixed << setprecision(2) << sum << endl;
}

void equation(float& a, float& b, float& c, ostream &output) {
    float delta;
    float res1 = 0, res2 = 0; 
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        res1 = (-b - sqrt(delta)) / (2 * a);
        res2 = (-b + sqrt(delta)) / (2 * a);
        output << fixed << setprecision(2);
        output << "Result: " << res1 << " " << res2 << endl;
    }
    else if (delta == 0) {
        res1 = (-b) / (2 * a);
        output << fixed << setprecision(2);
        output << "Result: " << res1 << endl;
    }
    else {
        output << "No real roots" << endl;
    }
}

void multiplication(int& n, ostream &output) {
    int res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    output << "Result: " << res << endl;
}

void sum3(int& n, int& x, ostream &output) {
    float sum = 0.0;
    float term = 1;
    for (int i = 1; i <= n; i++) {
        term *= x * x; // x^(2i)
        sum += term;
    }
    output << "Sum: " << fixed << setprecision(2) << sum << endl;
}

void daysInMonth(int month, int year, ostream &output) {
    if (month != 2) {
        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
            output << "31" << endl;
        } else {
            output << "30" << endl;
        }
    } else {
        if (year % 400 == 0 || (year % 100 != 0 && year % 4 == 0)) {
            output << "29" << endl;
        } else {
            output << "28" << endl;
        }
    }
}

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }
    return result;
}

void seriesSum(int& n, int& x, ostream &output) {
    float sum = 0.0;
    float term = x;
    for (int i = 1; i <= n; i++) {
        sum += term / factorial(i);
        term *= x;
    }
    output << fixed << setprecision(2) << sum << endl;
}

void bill(float& persons, float& previous, float& current, ostream &output) {
    float bill = 0;
    float con = (current - previous) / persons;
    if (con > 6) {
        bill = con * 7000;
    }
    else if (con > 4) {
        bill = con * 5200;
    }
    else if (con <= 4) {
        bill = con * 3300;
    }
    float res = bill * persons * 1.1;
    output << static_cast<int> (res + 0.5) << endl;
}

void rectangle(int Ax, int Ay, int Bx, int By, int Cx, int Cy, ostream &output) {
    int minX = min(Ax, Bx);
    int maxX = max(Ax, Bx);
    int minY = min(Ay, By);
    int maxY = max(Ay, By);

    if (Cx >= minX && Cx <= maxX && Cy >= minY && Cy <= maxY) {
        output << "C thuộc hình chữ nhật." << endl;
    } else {
        output << "C không thuộc hình chữ nhật." << endl;
    }
}

void bank(float& balance, float& month, float& rate, ostream &output) {
    float res;
    res = balance;
    for (int i = 0; i < month; i++) {
        res *= (1 + rate/100);
    }
    output << static_cast<int> (res) << endl;
}

