#include <iostream>
#include "Fraction.h"
using namespace std;

void inputFraction(Fraction &frac) {
    cout << "Enter numerator: ";
    cin >> frac.numerator;
    cout << "Enter denominator: ";
    cin >> frac.denominator;
}

void outputFraction(Fraction &frac) {
    cout << frac.numerator << "/" << frac.denominator << endl;
}

Fraction addFractions(Fraction &frac1, Fraction &frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator + frac2.numerator * frac1.denominator;
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}

Fraction subFractions(Fraction &frac1, Fraction &frac2) {
    Fraction result;
    result.numerator = frac1.numerator * frac2.denominator - frac2.numerator * frac1.denominator;
    result.denominator = frac1.denominator * frac2.denominator;
    return result;
}