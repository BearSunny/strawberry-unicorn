#include <iostream>
using namespace std;

int main() {
    float con, cost = 0;
    cout << "Enter your electricity consumption: ";
    cin >> con;
    if (con > 400) {
        cost += (con - 400) * 3151;
        con = 400;
    }
    if (con > 300) {
        cost += (con - 300) * 3050;
        con = 300;
    }
    if (con > 200) {
        cost += (con - 200) * 2729;
        con = 200;
    }
    if (con > 100) {
        cost += (con - 100) * 2167;
        con = 100;
    }
    if (con > 50) {
        cost += (con - 50) * 1866;
        con = 50;
    }
    cost += con * 1806;
    cout << "Your electricity bill: " << cost * 1.1 << endl;
}