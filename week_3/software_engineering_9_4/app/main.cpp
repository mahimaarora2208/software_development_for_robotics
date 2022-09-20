/**
 * @file main.cpp
 * @author Mahima Arora (marora1@umd.edu)
 * @brief ENPM808X Programing Exercise Week 2, Question 9_4 Software Engineering
 * @version 0.1
 * @date 2022-09-19
 * @section Class Description
 *
 * ectracts a new function that returns position of beggining of a given string in a text
 *
 */
// CPP Headers
#include <iostream>
#include <string>

using std::string;

/**
 *   @brief  Returns the position of string in the text
 *
 *   @param  text is the master string
 *   @param  stringToSearch is string to be searched in the text
 *   @return start position of string in text as size_t
 */
int getIndex(string &text, string &stringToSearch)
{
    // string member search function call
    int found = text.find(stringToSearch);
    return found;
}

/**
 *   @brief  Prints the position of string in the given text
 *
 *   @param  text is the major string
 *   @param  stringToSearch is sub-string to be searched in major string
 *   @return void
 */
void printPosition(string &text, string &stringToSearch)
{
    int position = getIndex(text, stringToSearch); // Function call

    if (position != string::npos)
    {
        std::cout << "The position of " << stringToSearch << " in " << text << " is " << position << std::endl;
    }
    else
    {
        std::cout << "String was not found in the text." << std::endl;
    }
}

int main()
{
    string text;
    string stringToSearch;
    std::cout << "Enter master string: " << std::endl;
    std::cin >> text; 
    
    std::cout << "Enter sub-string to search the master string: " << std::endl;
    std::cin >> stringToSearch; 
    printPosition(text, stringToSearch); // Function will print index where bot is beginging - in this case "2"

    return 0;
}