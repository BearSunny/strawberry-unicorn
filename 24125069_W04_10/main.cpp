#include <iostream>
#include <fstream>
#include "Functions.h"

using namespace std;

void processFile(const char* inputFileName, const char* outputFileName, int problemNumber) {
    ifstream input(inputFileName);
    if (!input.is_open()) {
        cerr << "Error: Could not open input file " << inputFileName << endl;
        return;
    }

    ofstream output(outputFileName);
    if (!output.is_open()) {
        cerr << "Error: Could not open output file " << outputFileName << endl;
        return;
    }

    switch (problemNumber) {
        case 1: {
            int n;
            while (input >> n){
                sum(n, output);
                output << endl;
            }
            break;
        }
        case 2: {
            int n;
            while (input >> n) {
                sum2(n, output);
                output << endl;
            }
            break;
        }
        case 3: {
            float a, b, c;
            while (input >> a >> b >> c) {
                equation(a, b, c, output);
                output << endl;
            }
            break;
        }
        case 4: {
            int n;
            while (input >> n) {
                multiplication(n, output);
                output << endl;
            }
            break;
        }
        case 5: {
            int n, x;
            while (input >> x >> n) {
                sum3(n, x, output);
                output << endl;
            }
            break;
        }
        case 6: {
            int month, year;
            while (input >> month >> year) {
                daysInMonth(month, year, output);
                output << endl;
            }
            break;
        }
        case 7: {
            int n, x;
            while (input >> x >> n) {
                seriesSum(n, x, output);
                output << endl;
            }
            break;
        }
        case 8: {
            float persons, previous, current;
            while (input >> persons >> previous >> current) {
                bill(persons, previous, current, output);
                output << endl;
            }
            break;
        }
        case 9: {
            int Ax, Ay, Bx, By, Cx, Cy;
            while (input >> Ax >> Ay >> Bx >> By >> Cx >> Cy) {
                rectangle(Ax, Ay, Bx, By, Cx, Cy, output);
                output << endl;
            }
            break;
        }
        case 10: {
            float balance, month, rate;
            while (input >> balance >> month >> rate) {
                bank(balance, month, rate, output);
                output << endl;
            }
            break;
        }
    }

    input.close();
    output.close();
}

int main() {
    const char* filenames[] = {
        "24125069_W04_10/P01.txt", "24125069_W04_10/P05.txt", "24125069_W04_10/P09.txt", "24125069_W04_10/P0902.txt", 
        "24125069_W04_10/P13.txt", "24125069_W04_10/P14.txt", "24125069_W04_10/P17.txt", "24125069_W04_10/P19.txt", "24125069_W04_10/P23.txt", "24125069_W04_10/P27.txt"
    };

    const char* output_files[] = {
        "24125069_W04_10/output_P01.txt", "24125069_W04_10/output_P05.txt", "24125069_W04_10/output_P09.txt", "24125069_W04_10/output_P0902.txt", 
        "24125069_W04_10/output_P13.txt", "24125069_W04_10/output_P14.txt", "24125069_W04_10/output_P17.txt", "24125069_W04_10/output_P19.txt", "24125069_W04_10/output_P23.txt", "24125069_W04_10/output_P27.txt"
    };

    int problemNumber;
    int fileIndex;

    cout << "Enter the problem number to execute: ";
    cin >> problemNumber;

    cout << "Enter the input file number to open (1-10 corresponding to P01 to P27): ";
    cin >> fileIndex;

    if (problemNumber < 1 || problemNumber > 10 || fileIndex < 1 || fileIndex > 10) {
        cerr << "Invalid problem or file index" << endl;
        return 1;
    }

    processFile(filenames[fileIndex - 1], output_files[fileIndex - 1], problemNumber);

    cout << "Execution complete. Results are saved in " << output_files[fileIndex - 1] << endl;
    return 0;
}
