// 24125069
// HUYNH KHANH MINH
// 24A01
#pragma once

/// @brief Date
struct Date {
    int day;
    int month;
    int year;
};

/// @brief Student
struct Student {
    int id;
    char full_name[1000];
    double gpa;
    Date dateOfBirth;
    char address[1000];
};

/// @brief Input a student
void inputStudent(Student &s);


/// @brief Output a student
void outputStudent(Student &s);


/// @brief Input a student from text file
void inputStudentFromTextFile(Student &s);


/// @brief Output a student to text file
void outputStudentToTextFile(Student &s);


/// @brief Output a student with format to text file
void outputToTextFile2(Student &s);


/// @brief Extract class
void extractClassToTextFile(Student &s);


/// @brief Compare 2 students by id.
bool compareByID(Student &s1, Student &s2);


/// @brief Compare 2 students by gpa, and then by id.
bool compareByGPAandID(Student &s1, Student &s2);


/// @brief Compare 2 students by name, and then by id.
bool compareByNameAndID(Student &s1, Student &s2);


/// @brief Compare 2 students by first name, and then by id.
bool compareByFirstNameAndID(Student &s1, Student &s2);


/// @brief Compare 2 students by last name, and then by id.
bool compareByLastNameAndID(Student &s1, Student &s2);


/// @brief Compare 2 students by dob, and then by id.
bool compareByDOBAndID(Student &s1, Student &s2);
