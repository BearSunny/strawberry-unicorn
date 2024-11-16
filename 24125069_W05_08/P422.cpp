// 24125069
// HUYNH KHANH MINH
// 24A01
#include <iostream>
#include <fstream>
#include "Date.h"
#include "Student.h"
using namespace std;

void displayMenu() {
    cout << "Menu:" << endl;
    cout << "1. Input a student" << endl;
    cout << "2. Output a student" << endl;
    cout << "3. Input a student from text file" << endl;
    cout << "4. Output a student to text file" << endl;
    cout << "5. Output a student with format to text file" << endl;
    cout << "6. Extract class" << endl;
    cout << "7. Compare two students by ID" << endl;
    cout << "8. Compare two students by GPA, and then by ID" << endl;
    cout << "9. Compare two students by name, and then by ID" << endl;
    cout << "10. Compare two students by first name, and then by ID" << endl;
    cout << "11. Compare two students by last name, and then by ID" << endl;
    cout << "12. Compare two students by date of birth, and then by ID" << endl;
    cout << "0. Exit" << endl;
}

int main() {
    Student s1, s2;
    int choice;

    do {
        displayMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                inputStudent(s1);
                break;
            case 2:
                outputStudent(s1);
                break;
            case 3:
                inputStudentFromTextFile(s1);
                break;
            case 4:
                outputStudentToTextFile(s1);
                break;
            case 5:
                outputToTextFile2(s1);
                break;
            case 6:
                extractClassToTextFile(s1);
                break;
            case 7:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByID(s1, s2)) {
                    cout << "Student 1 has a smaller ID than Student 2." << endl;
                } else {
                    cout << "Student 2 has a smaller or equal ID than Student 1." << endl;
                }
                break;
            case 8:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByGPAandID(s1, s2)) {
                    cout << "Student 1 is ranked lower by GPA (and ID) than Student 2." << endl;
                } else {
                    cout << "Student 2 is ranked lower or equal by GPA (and ID) than Student 1." << endl;
                }
                break;
            case 9:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByNameAndID(s1, s2)) {
                    cout << "Student 1 is ranked lower by name (and ID) than Student 2." << endl;
                } else {
                    cout << "Student 2 is ranked lower or equal by name (and ID) than Student 1." << endl;
                }
                break;
            case 10:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByFirstNameAndID(s1, s2)) {
                    cout << "Student 1 is ranked lower by first name (and ID) than Student 2." << endl;
                } else {
                    cout << "Student 2 is ranked lower or equal by first name (and ID) than Student 1." << endl;
                }
                break;
            case 11:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByLastNameAndID(s1, s2)) {
                    cout << "Student 1 is ranked lower by last name (and ID) than Student 2." << endl;
                } else {
                    cout << "Student 2 is ranked lower or equal by last name (and ID) than Student 1." << endl;
                }
                break;
            case 12:
                inputStudent(s1);
                inputStudent(s2);
                if (compareByDOBAndID(s1, s2)) {
                    cout << "Student 1 is younger or has a lower ID than Student 2." << endl;
                } else {
                    cout << "Student 2 is younger or has an equal or lower ID than Student 1." << endl;
                }
                break;
            case 0:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 0);
}
