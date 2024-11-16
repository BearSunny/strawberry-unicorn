// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <cmath>
#include <cstring>
#include <fstream>
#include "Course.h"
#include "Student.h"
#include "Date.h"
using namespace std;

void inputCourseFromTextFile(Course &c) {
    ifstream file("course.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file >> c.course_id;
    file.ignore();
    file.get(c.course_name, 1000, '\n');
    file.ignore();
    file.get(c.status, 100, '\n');
    file.ignore();
    file >> c.max_students;
    file.ignore();
    file >> c.min_students;
    file.ignore();
    file >> c.num_students;
    if (c.num_students < c.min_students || c.num_students > c.max_students) {
        cerr << "Error!";
        return;
    }
    for (int i = 0; i < c.num_students; i++) {
        inputStudentFromTextFile(c.students[i]);
    }
}

void outputCourseToTextFile(Course &c) {
    ofstream file("student_output.txt");
    if (!file) {
        cerr << "Error opening file" << endl;
        return;
    }
    file << c.course_id;
    file << c.course_name;
    file << c.status;
    file << c.max_students;
    file << c.min_students;
    for (int i = 0; i < c.num_students; i++) {
        if (c.students[i].id != 0) {
            outputStudentToTextFile(c.students[i]);
        }
    }
}

void addStudentToCourse(Course &c) {
    if (strcmp(c.status, "open") != 0) {
        cout << "Course is not open for enrollment." << endl;
    }
    if (c.num_students >= c.max_students) {
        cout << "This course has reached its capacity." << endl;
    }
    inputStudent(c.students[c.num_students]);
    c.num_students++;
}

void removeStudentFromCourse(Course &c) {
    int studentID;
    cout << "Enter the ID of the student to remove: ";
    cin >> studentID;
    if (strcmp(c.status, "open") != 0) {
        cout << "Course is not open for removal." << endl;
    }
    if (c.num_students <= c.min_students) {
        cout << "Cannot remove student. This course will fall below the required minimum number of students." << endl;
    }

    int index = -1;
    for (int i = 0; i < c.num_students; i++) {
        if (c.students[i].id == studentID) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Cannot find the ID of this student." << endl;
        return;
    }
    for (int i = index; i < c.num_students - 1; i++) {
        c.students[i] = c.students[i + 1];
    }
    c.num_students--;
}

void studentsBornInThisMonth(Course &c) {
    for (int i = 0; i < c.num_students; i++) {
        if (c.students[i].dateOfBirth.month == 11) {
            outputStudent(c.students[i]);
        }
    }
}

void studentsBornInThisDate(Course &c) {
    for (int i = 0; i < c.num_students; i++) {
        if (c.students[i].dateOfBirth.month == 11 && c.students[i].dateOfBirth.day == 12 && c.students[i].dateOfBirth.year == 2024) {
            outputStudent(c.students[i]);
        }
    }
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

void studentsOldEnoughToDrive(Course &c) {
    Date currentDate;
    int years;
    int months; 
    int days;
    for (int i = 0; i < c.num_students; i++) {
        calculateAge(c.students[i].dateOfBirth, currentDate, years, months, days);
        if (years >= 18) {
            outputStudent(c.students[i]);
        }
    }
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

void studentsInK19(Course &c) {
    for (int i = 0; i < c.num_students; i++) {
        int student_class = extractClass(c.students[i].id);
        if (student_class == 19) {
            outputStudentToTextFile(c.students[i]);
        }
    }
}

void findStudentsByID(Course &c) {
    int studentID;
    cout << "Enter the ID of the student to remove: ";
    cin >> studentID;
    int index = -1;
    for (int i = 0; i < c.num_students; i++) {
        if (c.students[i].id == studentID) {
            index = i;
            break;
        }
    }
    if (index == -1) {
        cout << "Cannot find the ID of this student." << endl;
        return;
    } else {
        outputStudentToTextFile(c.students[index]);
    }
}

void findStudentsByName(Course &c) {
    char name[1000];
    cout << "Enter full name of student you want to find: ";
    cin.get(name, 1000, '\n');

    for (int i = 0; i < c.num_students; i++) {
        if (strcmp(name, c.students[i].full_name) == 0) {
            outputStudentToTextFile(c.students[i]);
        }
    }
}

void sortStudentsByID(Course &c) {
    for (int i = 0; i < c.num_students - 1; i++) {
        bool flag = false;
        for (int j = 0; j < c.num_students - 1 - i; j++) {
            if (c.students[j].id > c.students[j + 1].id) {
                flag = true;
                Student temp = c.students[j];
                c.students[j] = c.students[j + 1];
                c.students[j + 1] = temp;
            }
        }
        if (!flag) {
            break;
        }
    }
}

void sortStudentsByFirstName(Course &c) {
    for (int i = 0; i < c.num_students - 1; i++) {
        bool flag = false;
        for (int j = 0; j < c.num_students - 1 - i; j++) {
            if (compareByFirstNameAndID(c.students[j], c.students[j + 1])) {
                flag = true;
                Student temp = c.students[j];
                c.students[j] = c.students[j + 1];
                c.students[j + 1] = temp;
            }
        }
        if (!flag) {
            break;
        }
    }
}

void sortStudentsByGPA(Course &c) {
    for (int i = 0; i < c.num_students - 1; i++) {
        bool flag = false;
        for (int j = 0; j < c.num_students - 1 - i; j++) {
            if (c.students[j].gpa > c.students[j + 1].gpa) {
                flag = true;
                Student temp = c.students[j];
                c.students[j] = c.students[j + 1];
                c.students[j + 1] = temp;
            }
        }
        if (!flag) {
            break;
        }
    }
}

void sortStudentsByDOB(Course &c) {
    for (int i = 0; i < c.num_students - 1; i++) {
        bool flag = false;
        for (int j = 0; j < c.num_students - 1 - i; j++) {
            if (compareByDOBAndID(c.students[j], c.students[j + 1])) {
                flag = true;
                Student temp = c.students[j];
                c.students[j] = c.students[j + 1];
                c.students[j + 1] = temp;
            }
        }
        if (!flag) {
            break;
        }
    }
}

