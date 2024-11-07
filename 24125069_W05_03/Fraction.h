#pragma once
#include <iostream>

/// @brief A fraction
/// @details A fraction is a number that expresses the relationship between two numbers
struct Fraction
{
  int numerator;
  int denominator;
};


void inputFraction(Fraction &frac);
void outputFraction(Fraction &frac);
Fraction addFractions(Fraction &frac1, Fraction &frac2);
Fraction subFractions(Fraction &frac1, Fraction &frac2);

