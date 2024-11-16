// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include "Student.h"
#include "Date.h"
using namespace std;

void inputStudent(Student &s) {
    cout << "Enter your ID: ";
    cin >> s.id;
    cin.ignore();
    cout << "Enter your full name: ";
    cin.get(s.full_name, 1000, '\n');
    cout << "Enter your GPA: ";
    cin >> s.gpa;
    cin.ignore();
    cout << "Enter your address: ";
    cin.get(s.address, 1000, '\n');
    cout << "Enter your date of birth: ";
    cin >> s.dateOfBirth.day >> s.dateOfBirth.month >> s.dateOfBirth.year;
}

void outputStudent(Student &s) {
    cout << "Student " << s.full_name << " - " << s.id << endl; 
    cout << "Date of birth: " << s.dateOfBirth.day << "/" << s.dateOfBirth.month << "/" << s.dateOfBirth.year << endl;
    cout << "Address: " << s.address << endl;
    cout << "GPA: " << s.gpa << endl;
}

void inputStudentFromTextFile(Student &s) {
    ifstream file("student.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file >> s.id;
    file.ignore();
    file.get(s.full_name, 1000, '\n');
    file >> s.gpa;
    file.ignore();
    file.get(s.address, 1000, '\n');
    file >> s.dateOfBirth.day >> s.dateOfBirth.month >> s.dateOfBirth.year;
    file.close();
}

void outputStudentToTextFile(Student &s) {
    ofstream file("student_output.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file << "Student " << s.full_name << " - " << s.id << endl; 
    file << "Date of birth: " << s.dateOfBirth.day << "/" << s.dateOfBirth.month << "/" << s.dateOfBirth.year << endl;
    file << "Address: " << s.address << endl;
    file << "GPA: " << s.gpa << endl;
    file.close();
}

void calculateAge(Date& birthDate, Date& currentDate, int& years, int& months, int& days) {
    years = currentDate.year - birthDate.year;

    if (currentDate.month < birthDate.month) {
        years--;
        months = 12 + currentDate.month - birthDate.month;
    } else {
        months = currentDate.month - birthDate.month;
    }

    if (currentDate.day < birthDate.day) {
        months--;
        // Adjust day calculation for the previous month
        static const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int previousMonth; 
        if (currentDate.month == 1) { 
            previousMonth = 12; 
        } else { 
            previousMonth = currentDate.month - 1; 
        }
        days = daysInMonth[previousMonth - 1] + currentDate.day - birthDate.day;
    } else {
        days = currentDate.day - birthDate.day;
    }

    if (birthDate.year % 4 == 0 && (birthDate.year % 100 != 0 || birthDate.year % 400 == 0)) {
        if (birthDate.month <= 2 && (birthDate.day < 29)) {
            days++;
        }
    }
}

void splitNames(char full_name[], char first_name[], char last_name[]) {
    int i = 0;
    int j = 0;
    
    while (full_name[i] != ' ' && full_name[i] != '\0') {
        first_name[i] = full_name[i];
        i++;
    }
    first_name[i] = '\0';
    i++;
    
    while (full_name[i] != '\0') {
        last_name[j++] = full_name[i++];
    }
    last_name[j] = '\0';
}

void outputToTextFile2(Student &s) {
    Date currentDate;
    int years, months, days;
    ofstream file("student_output.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file << "Student ID: " << s.id << endl; 
    char first_name[1000];
    char last_name[1000];
    splitNames(s.full_name, first_name, last_name);
    file << "First name: " << first_name << endl;
    file << "Last name: " << last_name << endl;
    calculateAge(s.dateOfBirth, currentDate, years, months, days);
    file << years << " years " << months << " months " << days << " days" << endl;
    file << "Address: " << s.address << endl;
    file << "GPA: " << s.gpa << endl;
    file.close();
}

int extractClass(int id) {
    int res = 0;
    for (int i = 1; i < 3; i++) {
        int divisor = pow(10, 8 - i);
        int digits = (id / divisor) % 10;
        res = res * 10 + digits;
    }
    return res;
}

void extractClassToTextFile(Student &s) {
    ofstream file("class_output.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file << "K" << extractClass(s.id) << endl;
}

bool compareByID(Student &s1, Student &s2) {
    return s1.id < s2.id;
}

bool compareByGPAandID(Student &s1, Student &s2) {
    if (s1.gpa != s2.gpa) {
        return s1.gpa < s2.gpa;
    }
    return s1.id < s2.id;
}

bool compareByNameAndID(Student &s1, Student &s2) {
    int compareName = strcmp(s1.full_name, s2.full_name);
    if (compareName != 0) {
        return compareName < 0;
    }
    return s1.id < s2.id;
}

bool compareByFirstNameAndID(Student &s1, Student &s2) {
    char first_name1[1000];
    char last_name1[1000];
    splitNames(s1.full_name, first_name1, last_name1);

    char first_name2[1000];
    char last_name2[1000];
    splitNames(s2.full_name, first_name2, last_name2);

    int compareName = strcmp(first_name1, first_name2);
    if (compareName != 0) {
        return compareName < 0;
    }
    return s1.id < s2.id;
}

bool compareByLastNameAndID(Student &s1, Student &s2) {
    char first_name1[1000];
    char last_name1[1000];
    splitNames(s1.full_name, first_name1, last_name1);

    char first_name2[1000];
    char last_name2[1000];
    splitNames(s2.full_name, first_name2, last_name2);

    int compareName = strcmp(last_name1, last_name2);
    if (compareName != 0) {
        return strlen(last_name1) < strlen(last_name2);
    }
    return s1.id < s2.id;
}

bool compareByDOBAndID(Student &s1, Student &s2) {
    if (s1.dateOfBirth.year != s2.dateOfBirth.year) {
        return s1.dateOfBirth.year < s2.dateOfBirth.year;
    }
    if (s1.dateOfBirth.month != s2.dateOfBirth.month) {
        return s1.dateOfBirth.month < s2.dateOfBirth.month;
    }
    if (s1.dateOfBirth.day != s2.dateOfBirth.day) {
        return s1.dateOfBirth.day < s2.dateOfBirth.day;
    }
    return s1.id < s2.id;
}
