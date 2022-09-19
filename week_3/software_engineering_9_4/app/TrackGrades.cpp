/**
 * @file GradeCourse.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 3.10 Software Engineering
 * @version 0.1
 * @date 2022-09-14
 * @section Class Description
 *
 * This source file describes a class called GradeCourse which is used to change grades
 * of the students as well as get average of the class for a paticular course.The header file
 * GradeCourse.hpp contains the class structure.
 *
 */

#include <iostream>
#include <GradeCourse.hpp>

/**
 * @brief Displays average grade of the class
 *
 */
void GradeCourse::getAverageGrade(void)
{
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        sum = sum + studentId[i];
    }
    gradeAvg = sum / 10;
    std::cout << "The grade average of the class is: " << gradeAvg << "\n";
}

/**
 * @brief Displays grade change of a student whose ID is provided as input
 *
 */
void GradeCourse::changeGrade(void)
{
    std::cout << "Enter student Id(index) to change grade:";
    std::cin >> idx;
    std::cout << "Enter new grade:";
    std::cin >> newGrade;
    studentId[idx] = newGrade;
    std::cout << "Student with ID " << idx << " had a grade change to 1" << newGrade << "\n";
}

/**
 * @brief Displays grades of all students
 *
 */
void GradeCourse::displayAllGrades(void)
{
    std::cout << "The student grades are as follows: "
              << "\n";
    for (int i = 0; i < 10; i++)
    {
        std::cout << i << ":" << studentId[i] << "\n";
    }
}

int main()
{
    // Creates object for GradeCourse
    GradeCourse courseA;
    courseA.displayAllGrades();
    courseA.getAverageGrade();
    courseA.changeGrade();
    std::cout << "New class average: ";
    courseA.getAverageGrade();
    std::cout << "\n";
    courseA.displayAllGrades();
}
