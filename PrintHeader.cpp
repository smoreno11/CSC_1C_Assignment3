/******************************************************************************
 * AUTHOR       : Saul Moreno
 * STUDENT ID   : 269491
 * ASSIGNMENT # : 3
 * CLASS        : CS1C
 * SECTION      : MW 5:00pm
 * DUE DATE     : 2/12/19
 ******************************************************************************/

#include"header.h"

/******************************************************************************
*FUNCTION - PrintHeader
*______________________________________________________________________________
*This function receives an assignment name, type and number then outputs the
* appropriate header - returns nothing.
*______________________________________________________________________________
*PRE-CONDITIONS
*	  asName:  Has to be previously defined
*	  asType:    Has to be previously defined
*	  asNum: Has to be previously defined
*
*POST-CONDITIONS
*	   This function will output class heading.
*	   <Post-conditions are the changed outputs either passed by value or
*	   by reference OR anything affected by the function.
*
*******************************************************************************/

void PrintHeader(std::string asName,  // IN - Assignment Name
		             int asNum,  // IN - assignment type
					             // (LAB or ASSIGNMENT)
					 char asType)// IN - assignment number
{
 std::cout << std::left;
 std::cout << "**********************************************\n";
 std::cout << "* PROGRAMMED BY : Saul Moreno\n";
 std::cout << "* "<< std::setw (14) << "STUDENT ID" << ": 269491\n";
 std::cout << "* "<< std::setw (14) << "CLASS" << ": CS 1C MW-5:00pm\n";
 std::cout << "* ";
 if (toupper (asType) == 'L')
 {
	 std::cout << "LAB #"<< std::setw(9);
 }
 else
 {
	 std::cout <<"ASSIGNMENT #" << std::setw(2);
 }
 std::cout << asNum << ": " << asName << std::endl;
 std::cout << "***********************************************\n\n";
 std::cout << std::right;
}


