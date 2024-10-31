#include <iostream>
#include <vector>
#include <string>
using namespace std;

string extractOdd(string str);
string extractEven(string str);

int main() {
    int num;
    vector<string> nums_string;
    vector<string> odd_string;
    vector<string> even_string;

    cout << "Numbers: ";
    while (true) {
        cin >> num;
        if (num == 0) break;
        string num_str = to_string(num);
        nums_string.push_back(num_str);
    }

    for (int i = 0; i < nums_string.size(); i++) {
        if ((i + 1) % 2 == 0) {
            even_string.push_back(extractEven(nums_string[i]));
        }
        else {
            odd_string.push_back(extractOdd(nums_string[i]));
        }
    }

        int sum1 = 0;
        int sum2 = 0;
        for (string &str : even_string) {
            sum1 += stoi(str);
        }
        for (string &str : odd_string) {
            sum2 += stoi(str);
        }
        cout << "Sum: " << sum1 + sum2 << endl;
}

string extractOdd(string str) {
    string extracted = "";
    for (int i = 0; i < str.length(); i++) {
        if ((i + 1) % 2 != 0) {
            extracted += str[i];
        }
    }
    return extracted;
}

string extractEven(string str) {
    string extracted = "";
    for (int i = 0; i < str.length(); i++) {
        if ((i + 1) % 2 == 0) {
            extracted += str[i];
        }
    }
    return extracted;
}
