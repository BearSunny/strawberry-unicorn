// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <fstream>
#include <cmath>
#include "Date.h"
using namespace std;

void inputDate(Date &d) {
    cout << "Input a date: ";
    cin >> d.day >> d.month >> d.year;
}

void outputDate(Date &d) {
    cout << d.year << " - " << d.month << " - " << d.day << endl;
}

void inputDateFromTextFile(Date &d) {
    ifstream file("date.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file >> d.day >> d.month >> d.year;
    file.close();
}

void outputDateFromTextFile(Date &d) {
    ofstream file("output.txt");
    if (!file) {
        cerr << "Error opening output file" << endl;
        return;
    }
    file << d.year << " - " << d.month << " - " << d.day << endl;
    file.close();
}

void outputDateWithFormat(Date &d) {
    ofstream file("output.txt");
    if (!file) {
        cerr << "Error opening output file" << endl;
        return;
    }
    file << d.month_string << " " << d.day << " " << d.year % 100;
}

bool dateComparison(Date &d1, Date &d2) {
    // If false, date1 is later than or the same as date2 
    // If true, date1 is earlier than date2
    if (d1.year > d2.year) {
        return false;
    }
    else if (d1.year < d2.year) {
        return true;
    } else {
        if (d1.month > d2.month) {
            return false;
        }
        else if (d1.month < d2.month) {
        return true;
        } else {
            if (d1.day > d2.day) {
                return false;
            }
            else if (d1.day < d2.day) {
                return true;
            } else {
                return false;
            }
        }
    }
}

bool leapYear(int year) {
    if (year % 400 == 0) {
        return true;
    }
    else if (year % 100 == 0) {
        return false;
    }
    else if (year % 4 == 0) {
        return true;
    }
    else {
        return false;
    }
}

void findTomorrow(Date &d) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    if (leapYear(d.year)) { 
        daysInMonth[1] = 29; 
    } 
    d.day += 1; 
    if (d.day > daysInMonth[d.month - 1]) { 
        d.day = 1; 
        d.month += 1; 
    } 
    // Check if month exceeds December 
    if (d.month > 12) { 
        d.month = 1; 
        d.year += 1; 
    } 
}

void findYesterday(Date &d) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    if (leapYear(d.year)) {
        daysInMonth[1] = 29;
    }
    d.day -= 1;
    if (d.day < 1) {
        d.month -= 1;
        if (d.month < 1) {
            d.month = 12;
            d.year -= 1;
        }
        d.day = daysInMonth[d.month - 1];
    }
}

void incrementByKDay(Date &d, int k) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    while (k > 0) {
        if (leapYear(d.year)) {
            daysInMonth[1] = 29;
        } else {
            daysInMonth[1] = 28;
        }
        int daysInCurrentMonth = daysInMonth[d.month - 1];
        if (d. day + k <= daysInCurrentMonth) {
            d.day += k;
            break;
        }
        else {
            k -= (daysInCurrentMonth - d.day + 1);
            d.day = 1;
            d.month += 1;
            if (d.month > 12) {
                d.month = 1; 
                d.year += 1;
            }
        }
    }
}

void decrementByKDay(Date &d, int k) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    while (k > 0) {
        if (leapYear(d.year)) {
            daysInMonth[1] = 29;
        } else {
            daysInMonth[1] = 28;
        }
        if (d.day > k) {
            d.day -= k;
            break;
        } else {
            k -= d.day;
            d.month -= 1;
            if (d.month < 1) {
                d.year -= 1;
                d.month = 12;
            }
            d.day = daysInMonth[d.month - 1];
        }
    }
}

int distanceFromJan1(Date &d) {
    int daysInMonth[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 }; 
    if (leapYear(d.year)) {
        daysInMonth[1] = 29;
    }
    int dayInYear = 0;
    for (int i = 0; i < d.month - 1; i++) {
        dayInYear += daysInMonth[i];
    }
    dayInYear += d.day;
    return dayInYear - 1;
}

int distanceFromJanFirst1970(Date &d) {
    int countLeap = 0;
    for (int i = 1970; i <= d.year; i++) {
        if (leapYear(i)) {
            countLeap++;
        }
    }
    int totalYear = d.year - 1970 + 1;
    int countNonLeap = totalYear - countLeap;
    int totalDayJan1SameYear = distanceFromJan1(d);
    int total = countLeap * 366 + countNonLeap * 365 + totalDayJan1SameYear - 1;
    return total;
}

int distanceBetweenTwoDates(Date &d1, Date &d2) {
    int daysFrom1970ToD1 = distanceFromJanFirst1970(d1);
    int daysFrom1970ToD2 = distanceFromJanFirst1970(d2);
    int daysBetween = abs(daysFrom1970ToD2 - daysFrom1970ToD1);
}

void dateOfWeek(Date &d) {
    int totalDays = distanceFromJanFirst1970(d);
    int remainder = totalDays % 7;
    switch(remainder) {
        case 0: {
            cout << "Thursday" << endl;
            break;
        }
        case 1: {
            cout << "Friday" << endl;
            break;
        }
        case 2: {
            cout << "Saturday" << endl;
            break;
        }
        case 3: {
            cout << "Sunday" << endl;
            break;
        }
        case 4: {
            cout << "Monday" << endl;
            break;
        }
        case 5: {
            cout << "Tuesday" << endl;
            break;
        }
        case 6: {
            cout << "Wednesday" << endl;
            break;
        }
    }
}