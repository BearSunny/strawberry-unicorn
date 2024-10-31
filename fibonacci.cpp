#include <iostream>
using namespace std;

int main() {
    int N, next;
    int a = 0;
    int b = 1;
    cout << "Enter a positive integer: ";
    cin >> N;
    cout << "Fibonacci sequence: ";
    for (int i = 0; i < N; i++) {
        cout << a << " ";
        next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}