// 24125069
// HUYNH KHANH MINH
// 24A01

#include <iostream>
#include <fstream>
#include "Course.h"
#include "Date.h"
#include "Student.h"
using namespace std;

void displayMenu() { 
    cout << "Menu:" << endl; 
    cout << "1. Input a course from text file" << endl; 
    cout << "2. Output a course to text file" << endl; 
    cout << "3. Add student to a course" << endl; 
    cout << "4. Remove student from a course" << endl; 
    cout << "5. Students born in this month" << endl; 
    cout << "6. Students born on this date" << endl; 
    cout << "7. Students legal to have driving license" << endl; 
    cout << "8. Students in K19" << endl; 
    cout << "9. Find students by ID" << endl; 
    cout << "10. Find students by name" << endl; 
    cout << "11. Sort students by ID" << endl; 
    cout << "12. Sort students by first name" << endl; 
    cout << "13. Sort students by GPA" << endl; 
    cout << "14. Sort students by DOB" << endl; 
    cout << "0. Exit" << endl; 
}

int main() {
    Course course;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputCourseFromTextFile(course);
                break;
            case 2:
                outputCourseToTextFile(course);
                break;
            case 3:
                addStudentToCourse(course);
                break;
            case 4:
                removeStudentFromCourse(course);
                break;
            case 5:
                studentsBornInThisMonth(course);
                break;
            case 6:
                studentsBornInThisDate(course);
                break;
            case 7:
                studentsOldEnoughToDrive(course);
                break;
            case 8:
                studentsInK19(course);
                break;
            case 9:
                findStudentsByID(course);
                break;
            case 10:
                findStudentsByName(course);
                break;
            case 11:
                sortStudentsByID(course);
                outputCourseToTextFile(course);
                break;
            case 12:
                sortStudentsByFirstName(course);
                outputCourseToTextFile(course);
                break;
            case 13:
                sortStudentsByGPA(course);
                outputCourseToTextFile(course);
                break;
            case 14:
                sortStudentsByDOB(course);
                outputCourseToTextFile(course);
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}
