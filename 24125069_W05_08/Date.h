// 24125069
// HUYNH KHANH MINH
// 24A01
#pragma once

/// @brief Date
struct Date {
    int day, month, year;
    char month_string[100];
};

/// @brief Input date from console
void inputDate(Date &d);

/// @brief Output date to console
void outputDate(Date &d);

/// @brief Input date from text file
void inputDateFromTextFile(Date &d);

/// @brief Ouput date to text file
void outputDateFromTextFile(Date &d);

/// @brief Ouput date with format to text file
void outputDateWithFormat(Date &d);

/// @brief Compare 2 dates
bool dateComparison(Date &d1, Date &d2);

/// @brief Find yesterday
void findYesterday(Date &d);

/// @brief Find tomorrow
void findTomorrow(Date &d);

/// @brief Increment by k day
void incrementByKDay(Date &d, int k);

/// @brief Decrement by k day
void decrementByKDay(Date &d, int k);

/// @brief Calculate distance from Jan 1st of the same year
int distanceFromJan1(Date &d);

/// @brief Calculate distance from date to Jan 1st 1970
int distanceFromJanFirst1970(Date &d);

/// @brief Calculate distance between 2 dates
int distanceBetweenTwoDates(Date &d1, Date &d2);

/// @brief Find date of week
void dateOfWeek(Date &d);

