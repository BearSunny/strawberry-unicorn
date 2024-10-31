#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count;
    int num;
    cout << "Enter number and count: ";
    cin >> num >> count;
    string num_string = to_string(num);
    for (int i = num_string.length() - 1; i >= 0; i--) {
            num_string[i] = '0';
            count--;
            if (count == 0) break;
    }
    cout << num_string << endl;
}