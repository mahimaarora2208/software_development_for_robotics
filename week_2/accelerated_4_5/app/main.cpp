/**
 * @file main.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 4_5 Accelerated C++
 * @version 0.1
 * @date 2022-09-19
 * @section Class Description
 *
 * Reads a stream of words and counts total and unique words input the stream
 */
// CPP Headers
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

/**
 *   @brief  Reads from input stream and prints the total number of words entered and the count
 *           of each word.
 *   @param  input is the input stream
 *   @param  words is the vector that will contain input stream
 *   @return void
 */
void readInput(std::istream &input,
               std::vector<std::string> &words)
{
    std::string x;
    while (input >> x)
    {
        words.push_back(x);
    }

    // Print total number of words
    std::cout << std::endl
              << "Total number of words: " << words.size() << std::endl;

    std::sort(words.begin(), words.end()); // Sort the vector of words

    std::string previousWord = words[0];
    int count = 1;
    for (int iter = 1; iter < words.size(); iter++)
    {
        if (previousWord == words[iter])
        {
            count++;
        }
        else if (previousWord != words[iter])
        {
            std::cout << previousWord << " was entered " << count << " times" << std::endl;
            previousWord = words[iter];
            count = 1;
        }
    }
    std::cout << previousWord << " was entered " << count << " times" << std::endl;
}

int main()
{
    std::vector<std::string> wordsVect;
    std::cout << "Enter the stream of words. press CTRL+D to calculate: " << std::endl;
    readInput(std::cin, wordsVect);
}