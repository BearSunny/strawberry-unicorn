#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[5]; 
    char s2[10]; 
    char s3[100];
    int t;
    
    cout << "Please input an integer: ";
    cin >> t;
    cout << "t= " << t << endl;

    // Clean up the Input buffer
    while (cin.get() != '\n');

    cin.ignore(100, '\n');
    cout << "s1: ";
    cin.get(s1, 5, '\n');

    cin.ignore(100, '\n'); // Clean up buffer
    cout << "s2: ";
    cin.get(s2, 10, '\n');

    cin.ignore(100, '\n'); // Clean up buffer
    cin.get(); // To get input for s3 as there are no more chars in the waiting room for s3
    cout << "s3: ";
    cin.get(s3, 100, '\n');
    cout << "s3 = " << s3 << endl;
}