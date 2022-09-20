/**
 * @file GradeCourse.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 4_7 Accelerated C++
 * @version 0.1
 * @date 2022-09-19
 * @section Class Description
 *
 * Calculates average of the numbers in vector of type double
 *
 */

#include <iostream>
#include <vector>
#include <stdexcept>

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::vector;

double calcAverage(vector<double> vect)
{
    int vectSize = vect.size();

    if (vectSize == 0)
        throw domain_error("ERROR: vector is empty or input is not a number. Try again...!");

    double sum = 0;
    for (int i = 0; i != vectSize; ++i)
    {
        sum += vect[i];
    }
    return sum / vectSize;
}

int main()
{
    double x;
    vector<double> numbers;
    cout << "Enter numbers in vector. Press Ctrl+ D when finished:  " << endl;
    while (cin >> x)
    {
        numbers.push_back(x);
    }
    try
    {
        cout << "Average: " << calcAverage(numbers) << endl;
    }
    catch (domain_error e)
    {
        cout << e.what();
    }
}