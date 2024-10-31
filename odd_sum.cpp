#include <iostream>
using namespace std;

int main() {
    int i = 1, N;
    int sum = 0;
    cout << "N: ";
    cin >> N;
    while (i <= N)
    {
       sum += i;
       i += 2;
    }
    cout << "Result: " << sum << endl;
}