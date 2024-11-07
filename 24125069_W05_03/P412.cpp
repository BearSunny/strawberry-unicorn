#include <iostream>
#include "Fraction.h"
using namespace std;

int main() {
    Fraction frac1, frac2, result;

    cout << "Input first fraction: " << endl;
    inputFraction(frac1);
    cout << "Input second fraction: " << endl;
    inputFraction(frac2);

    cout << "First fraction: ";
    outputFraction(frac1);
    cout << "Second fraction: ";
    outputFraction(frac2);
    
    result = addFractions(frac1, frac2); 
    cout << "Sum of fractions: "; 
    outputFraction(result); 

    result = subFractions(frac1, frac2); 
    cout << "Subtraction of fractions: "; 
    outputFraction(result);

    cout << endl;
}