/**
 * @file concatVector.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 6_9 Accelerated C++
 *  * @version 0.1
 * @date 2022-09-19
 * @section Class Description
 *
 *  Program to concatenate all elements of a vector using a library function accumulate(b,e,t)
 */
// cpp headers
#include <iostream>
#include <vector>
#include <string>
#include <numeric>

using std::accumulate;
using std::cout;
using std::string;
using std::vector;

int main()
{
    vector<string> inputStrings = {"This ", "is ", "a ", "test ", "sentence ", "for ", "question ", "6_9!"};
    string line = accumulate(inputStrings.begin(), inputStrings.end(), string(""));
    cout << line << std::endl;
    return 0;
}
