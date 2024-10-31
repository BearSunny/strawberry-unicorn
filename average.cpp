#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int num;
    int sum = 0;
    int count = 0;
    bool flag = true;
    cout << "Input: " << endl;
    while (true) {
        cin >> num;
        if (num == 0) break;
        if (flag) {
            sum = num;
            flag = false;
            count = 1;
        }
        else {
            sum += num;
            count++;
        }
    }

    if (count > 0) {
        float avg = static_cast<double> (sum) / count;
        cout << "Average: " << fixed << setprecision(2) <<  avg << endl;
    }
}