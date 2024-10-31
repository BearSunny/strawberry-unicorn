#include <iostream>
using namespace std;

int main() {
    float salary, real_salary, tax = 0;
    int dependent;
    do {
        cout << "Please enter your monthly salary: ";
        cin >> salary;
        cout << "Number of dependants: ";
        cin >> dependent;
        if (salary < 20) {
            cout << "Your salary must be over 20 to pay tax!" << endl;
        }
    } while (salary < 20);

    real_salary = salary - 11 - dependent * 4.4;
    if (real_salary > 80) {
        tax += (real_salary - 80) * 0.35;
        real_salary = 80;
    }
    if (real_salary > 52) {
        tax += (real_salary - 52) * 0.30;
        real_salary = 52;
    }
    if (real_salary > 32) {
        tax += (real_salary - 32) * 0.25;
        real_salary = 32;
    }
    if (real_salary > 18) {
        tax += (real_salary - 18) * 0.20;
        real_salary = 18;
    }
    if (real_salary > 10) {
        tax += (real_salary - 10) * 0.15;
        real_salary = 10;
    }
    if (real_salary > 5) {
        tax += (real_salary - 5) * 0.10;
        real_salary = 5;
    }
    tax += real_salary * 0.05;
    cout << "Your tax is: " << tax * 1000000 << endl;
    return 0;
}