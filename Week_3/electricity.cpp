#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int e;
    float total;
    cout << "Enter your electricity consumption: ";
    cin >> e;

    if (e <= 50) {
        total = (1.893 * (e)) * (1.1);
    }
    else if (e <= 100) {
        total = (50 * 1.893 + (1.956 * (e - 50))) * (1.1);
    }
    else if (e <= 200) {
        total = (50 * 1.893 + 50 * 1.956 + 2.271 * (e - 100)) * (1.1);
    }
    else if (e <= 300) {
        total = (50 * 1.893 + 50 * 1.956 + 2.271 * 100 + 2.860 * (e - 200)) * (1.1);
    }
    else if (e <= 400) {
        total = (50 * 1.893 + 50 * 1.956 + 2.271 * 100 + 2.860 * 100 + 3.197 * (e - 300)) * (1.1);
    }
    else {
        total = (50 * 1.893 + 50 * 1.956 + 2.271 * 100 + 2.860 * 100 + 3.197 * 100 + 3.302 * (e - 400)) * (1.1);
    }

    cout << fixed << setprecision(5);
    cout << "Your electricity bill: " << total << " VND" << endl;
    return 0;
}