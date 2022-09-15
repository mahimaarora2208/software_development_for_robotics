
/**
 * @file GradeCourse.hpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 3.10 Software Engineering
 * @version 0.1
 * @date 2022-09-14
 * @section Class Description
 * 
 * Header file for GradeCourse
 * 
 */

#include <iostream>
/**
 *  @brief Class that supports course grading for a course
 */
class GradeCourse
{
private:
    int idx; // array index
    int newGrade; // updated grade used for changeGrade()
    float gradeAvg; // average of all grades in array
    int studentId[10] = {70, 88, 92, 51, 55, 60, 65, 70, 91, 99}; //array with student grades
public:
    void getAverageGrade();
    void changeGrade();
    void displayAllGrades();
};
