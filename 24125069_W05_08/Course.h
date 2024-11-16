// 24125069
// HUYNH KHANH MINH
// 24A01
#pragma once
#include "Student.h"

/// @brief Course
struct Course {
    int course_id;
    int num_students;
    char course_name[1000];
    Student students[5000];
    char status[100];
    int max_students;
    int min_students;
};

/// @brief Input a course from text file
void inputCourseFromTextFile(Course &c);

/// @brief Ouput a course to text file
void outputCourseToTextFile(Course &c);

/// @brief Add student to a course
void addStudentToCourse(Course &c);

/// @brief Remove student from a course
void removeStudentFromCourse(Course &c);

/// @brief Students born in this month
void studentsBornInThisMonth(Course &c);

/// @brief Students born on this date
void studentsBornInThisDate(Course &c);

/// @brief Students legal to have driving license
void studentsOldEnoughToDrive(Course &c);

/// @brief Students in K19
void studentsInK19(Course &c);

/// @brief Find students by ID
void findStudentsByID(Course &c);

/// @brief Find students by name
void findStudentsByName(Course &c);

/// @brief Sort students by ID
void sortStudentsByID(Course &c);

/// @brief Sort students by first name
void sortStudentsByFirstName(Course &c);

/// @brief Sort students by GPA
void sortStudentsByGPA(Course &c);

/// @brief Sort students by DOB
void sortStudentsByDOB(Course &c);
