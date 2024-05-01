// C++ Libraries
#include <iostream>
#include <string>
#include <vector>

// C Libraries
#include <stdio.h>
#include <math.h>

// My Headers
#include "fourfunction.h"
#include "advancedfunction.h"

char getUserOperationSelection();
char getAdvancedSelection();
double parseAdvancedSelection();

int main()
{
    // Declare the variables
    std::vector<double> traditionalValues;
    std::vector<std::string> monomials;
    char operationChoice;
    bool advancedCalcSelected;
    bool algebraSelected;

    operationChoice = getUserOperationSelection(); // get the user's choice of operation.
    if (operationChoice = 'o')
    {
        advancedCalcSelected = true;
        char advancedSelection = getAdvancedSelection();
        if (advancedSelection = 'a')
        {
            algebraSelected = true;
        }
        else
        {
            parseAdvancedSelection();
        }
    }

    return 0;
}

char getUserOperationSelection()
{
    // Prompt the user for the operation choice
    char selectedOperation;
    std::cout << "Which operation would you like to perform?\n";
    std::cout << "Addition - select 'a'\n";
    std::cout << "Subtraction - select 's'\n";
    std::cout << "Multiplication - select 'm'\n";
    std::cout << "Division - select 'd'\n";
    std::cout << "Other - select 'o'\n";
    std::cin >> selectedOperation;

    return selectedOperation;
}