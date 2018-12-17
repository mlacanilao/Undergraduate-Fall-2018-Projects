/* 
Homework #5 Part 1
Programmer: Michael Lacanilao
*/

#include <iostream>
using namespace std;

int main()
{
	// Define constants.
	const int MAX_PATTERN = 6;

	// Define variables.
	int numberOfRows,      // The number of rows.
	    numberOfAsterisks, // The number of asterisks in the first row.
	    asteriskPattern;   // The type of pattern the user chooses.
		
	// Print title.
	cout << "HOMEWORK 5 Part I\n";
	
	// Prompt user 6 times.
	for (int patternCounter = 1; patternCounter <= MAX_PATTERN; patternCounter++)
	{
		// Prompt user the number of rows.
		cout << "\nEnter the number of rows: ";
		cin >> numberOfRows;

		// Prompt user the number of asterisks in the first row.
		cout << "Enter the number of asterisks in the first row: ";
		cin >> numberOfAsterisks;
		cin.ignore();

		// Prompt user the type of pattern.
		cout << "Enter 1 if you want *'s to increase on each row, -1 for decrease, 0 for no increase 0: ";
		cin >> asteriskPattern;
		cin.ignore();

		// Switch menu for type of pattern.
		switch (asteriskPattern)
		{
			// If user wants to increment asterisks in the following rows.
			case 1:
			{	
				// FOR loop until number of rows has been reached.
				for (int rowCounter = 1; rowCounter <= numberOfRows; rowCounter++)
				{
					// FOR loop until number of asterisks has been reached.
					for(int asteriskCounter = 1; asteriskCounter <= numberOfAsterisks; asteriskCounter++)
					{
						cout << "*";
					}
					cout << "\n";
					
					// Increment number of asterisks.
					numberOfAsterisks++;
				}
			}
			break;

			// If user wants to decrement asterisks in the following rows.
			case -1:
			{
				// FOR loop until number of rows has been reached.
				for (int rowCounter = 1; rowCounter <= numberOfRows; rowCounter++)
				{
					// FOR loops until number of asterisks has been reached.
					for (int asteriskCounter = 1; asteriskCounter <= numberOfAsterisks; asteriskCounter++)
					{
						cout << "*";
					}
					cout << "\n";
					
					// Decrement number of asterisks.
					numberOfAsterisks--;
				}
			}
			break;

			// If user wants to keep the same number of asterisks as the first row.
			case 0:
			{
				// FOR loop until number of rows has been reached. 
				for (int rowCounter = 1; rowCounter <= numberOfRows; rowCounter++)
				{
					for (int asteriskCounter = 1; asteriskCounter <= numberOfAsterisks; asteriskCounter++)
					{
						cout << "*";
					}
					cout << "\n";
				}
			}
			break;
		}			
	}
	system("pause");
	return 0;
}
