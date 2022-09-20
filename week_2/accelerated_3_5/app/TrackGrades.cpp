/**
 * @file TrackGrades.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 3_5 Accelerated C++
 * @version 0.1
 * @date 2022-09-15
 * @section Class Description
 *
 *
 */

#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::vector;

int main()
{
    const int maxHomework = 5;
    int maxStudents;
    vector<string> studentNames;
    vector<double> studentScores;
    double totalScore;
    double score;
    double meanScore;
    string studentName;
    cout << "Enter number of students: " << endl;
    cin >> maxStudents;

    for (int i = 0; i < maxStudents; i++)
    {
        totalScore = 0; // Initialise
        meanScore = 0;
        cout << "Enter student's name: " << endl;
        cin >> studentName;
        studentNames.push_back(studentName);
        cout << "Enter " << maxHomework << " homework scores and press enter after each entry: " << endl;
        for (int i = 0; i < maxHomework; i++)
        {
            cin >> score;
            totalScore += score;
        }
        meanScore = totalScore / maxHomework;
        studentScores.push_back(meanScore);
    }
    for (int j = 0; j < maxStudents; j++)
    {
        cout << studentNames[j] << "'s mean is " << studentScores[j] << endl;
    }
    return 0;
}
