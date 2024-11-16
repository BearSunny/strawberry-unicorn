// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <fstream>
#include "Date.h"
using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Input and Output Date" << endl;
    cout << "2. Compare Two Dates" << endl;
    cout << "3. Calculate Distance from Jan 1st 1970" << endl;
    cout << "4. Calculate Distance Between Two Dates" << endl;
    cout << "5. Find Yesterday and Tomorrow" << endl;
    cout << "6. Increment and Decrement by K Days" << endl;
    cout << "7. Find Day of the Week for a Date" << endl;
    cout << "0. Exit" << endl;
}

int main() {
    int choice;
    Date d1, d2;
    int k;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter a date (dd mm yyyy): ";
                inputDate(d1);
                cout << "You entered: ";
                outputDate(d1);
                break;
            case 2:
                cout << "Enter first date (dd mm yyyy): ";
                inputDate(d1);
                cout << "Enter second date (dd mm yyyy): ";
                inputDate(d2);
                if (dateComparison(d1, d2)) {
                    cout << "Date 1 is earlier than Date 2." << endl;
                } else {
                    cout << "Date 1 is later than or the same as Date 2." << endl;
                }
                break;
            case 3:
                cout << "Enter a date (dd mm yyyy): ";
                inputDate(d1);
                cout << "Days from 01/01/1970: " << distanceFromJanFirst1970(d1) << endl;
                break;
            case 4:
                cout << "Enter first date (dd mm yyyy): ";
                inputDate(d1);
                cout << "Enter second date (dd mm yyyy): ";
                inputDate(d2);
                cout << "Days between the two dates: " << distanceBetweenTwoDates(d1, d2) << " days." << endl;
                break;
            case 5:
                cout << "Enter a date (dd mm yyyy): ";
                inputDate(d1);
                findYesterday(d1);
                cout << "Yesterday was: ";
                outputDate(d1);
                findTomorrow(d1); 
                findTomorrow(d1);
                cout << "Tomorrow will be: ";
                outputDate(d1);
                break;
            case 6:
                cout << "Enter a date (dd mm yyyy): ";
                inputDate(d1);
                cout << "Enter number of days to increment: ";
                cin >> k;
                incrementByKDay(d1, k);
                cout << "Date after incrementing by " << k << " days: ";
                outputDate(d1);
                cout << "Enter number of days to decrement: ";
                cin >> k;
                decrementByKDay(d1, k);
                cout << "Date after decrementing by " << k << " days: ";
                outputDate(d1);
                break;
            case 7:
                cout << "Enter a date (dd mm yyyy): ";
                inputDate(d1);
                cout << "Day of the week: ";
                dateOfWeek(d1);
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice, please try again." << endl;
        }
    } while (choice != 0);
}


