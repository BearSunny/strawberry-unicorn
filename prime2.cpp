#include <iostream>
using namespace std;

// But function can take up more memory and longer runtime
bool prime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int x;
    cout << "Enter a positive integer: ";
    cin >> x;

    int l = x;
    int r = x;
    int res;
    while (true) {
        if (l > 1)  {
            if (prime(l)) {
                res = l;
                break;
            }
        l -= 1;
        }
        if (prime(r)) {
            res = r;
            break;
        }
        r += 1;
    }
    cout << "Prime: " << res << endl;
}