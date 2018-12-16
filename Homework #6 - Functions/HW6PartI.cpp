/* 
 *Homework #6 Part 1
 *This program does addition and subtraction for two numbers.
 *Programmer: Michael Lacanilao
*/

#include <iostream>
#include <string>
using namespace std;

// Define constants.
const string PROGRAMMER = "Michael Lacanilao"; // The programmer's name. 

const int SUBTRACTION_CHOICE = 2, // Menu choice for subtraction.
		  ADDITION_CHOICE = 1;	  // Menu choice for addition.

// Function prototypes.
int getChoice();
void getNumbers(double &, double &);
double addition(double, double);
double subtraction(double, double);
void displayResult(double);

int main()
{	 
	// Define variables.
	int userChoice; // The user's menu choice.

	double result,  // The result.
		   num1,    // The user's first number.
		   num2;    // The user's second number.

	// Print title.
	cout << "WORKING WITH FUNCTIONS\n\n";

	// Call getChoice function.
	userChoice = getChoice();

	// Call getNumbers function. Passing num1 and num2 by reference.
	getNumbers(num1, num2);

	// Calculate result.
	switch (userChoice)
	{
		case ADDITION_CHOICE:
		{
			// Call addition function, pass num1 and num2, and store in result.
			result = addition(num1, num2);
		}
		break;

		case SUBTRACTION_CHOICE:
		{
			// Call subtraction function, pass num1 and num2, and store in result.
			result = subtraction(num1, num2);
		}
		break;

		default:
		{
			// Print error.
			cout << "Error.\n";
		}
	}

	// Call displayResult function. Passing result.
	displayResult(result);

	// Print programmer name.
	cout << "Programmer: " << PROGRAMMER << endl;

	system("pause");
	return 0;
}

//*******************************************************************************************************************
// Definition of function getChoice.																				*
// This function prompts the user if they want to add two numbers or subtract two numbers and returns the choice.	*	
//*******************************************************************************************************************

int getChoice()
{
	// Define local variables.
	char userCharChoice;	 // The user's choice as a character.
	int userIntChoice;		 // The user's choice as a integer.
	
	// Prompt user for their choice.
	cout << "Please enter 1 if you want to add two numbers\n"
		 << "enter 2 if you want to subtract two numbers:\n";
	cin >> userCharChoice;

	// Input validation.
	while (userCharChoice != '1' && userCharChoice != '2')
	{
		cout << "Error. Please re-enter 1 if you want to add two number\n"
			 << "enter 2 if you want to subtract 2 numbers:\n";
		cin >> userCharChoice;
	}

	// Stores choice as an integer. Return user choice value back to main function.
	return userIntChoice = userCharChoice == '1' ? ADDITION_CHOICE : SUBTRACTION_CHOICE;
}

//***************************************************
// Definition of function getNumbers.				*
// This function returns the user's two numbers.	*
//***************************************************

void getNumbers(double &num1, double &num2)
{
	// Prompt user for two numbers and return to num1 and num2.
	cout << "Please enter two numbers: ";
	cin >> num1 >> num2;
}

//***********************************************************
// Definition of function addition.							*
// This function returns the sum of the user's two numbers.	*
//***********************************************************

double addition(double num1, double num2)
{
	// Calculate the sum and return value to result in main function.
	return num1 + num2;
}

//*******************************************************************
// Definition of function subtraction.								*
// This function returns the difference of the user's two numbers.	*
//*******************************************************************

double subtraction(double num1, double num2)
{
	// Calculate the difference and return value to result in main function.
	return num1 - num2;
}

//*******************************************
// Definition of function displayResult.	*
// This function displays the result. 		*
//*******************************************

void displayResult(double result)
{
	// Print result.
	cout << "The result is " << result << endl;
}