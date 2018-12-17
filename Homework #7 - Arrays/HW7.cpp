/* Homework #7
 * This program prints out numbers in a file greater than the number specified by the user.
 * Programmer: Michael Lacanilao
*/ 

#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

// Function prototypes.
void displayGreaterThan(int [], int, int);

// Define global constants.
const string PROGRAMMER = "Michael Lacanilao"; // The name of the programmer.

int main()
{
	// Define array that will store the integers in the file.
	const int ARRAY_SIZE = 50; // The size of the array.
	int numbers[ARRAY_SIZE];   // The array that will store the numbers from the file.

	// Define variables.
	int n,                    // The user's number.
	    fileIntegerCount = 0; // The total number of integers in the file. 

	string fileName; // The name of the file.

	ifstream inputFile; // The file stream object.

	// Print title.
	cout << "HOMEWORK #7\n\n";

	// Prompt user for file name.
	cout << "Enter the filename with the list of numbers: ";
	cin >> fileName;

	// Open file.
	inputFile.open(fileName);

	// Check if file opened.
	if (inputFile)
	{
		// Counts how many integers are in the file. Store numbers in file into array.
		while (fileIntegerCount < ARRAY_SIZE && inputFile >> numbers[fileIntegerCount])
		{
			fileIntegerCount++;
		}

		// Close file.
		inputFile.close();

		// Prompt user for number.
		cout << "Enter the integer to show integers greater than: ";
		cin >> n;

		cout << "The numbers in the list that are greater than " << n << " are:" << endl;

		// Call function. Pass array, array size, and value of n.
		displayGreaterThan(numbers, fileIntegerCount, n);
	}
	else
	{
		// Print error opening file.
		cout << "Error opening file.\n";
	}

	// Print programmer name.
	cout << "\nProgrammer: " << PROGRAMMER << endl;
		
	system("pause");
	return 0;
}

//***********************************************************************************************
// Definition of function displayGreaterThan.													*
// This function displays numbers in the file greater than the number specified by the user.	*
//***********************************************************************************************

void displayGreaterThan(int numbers[], int fileIntegerCount, int n)
{
	// Checks through array in sequence.
	for (int count = 0; count < fileIntegerCount; count++)
	{
		// If the current number in the array is greater than the number specified by the user. 
		if (numbers[count] > n)
		{
			// Print the number in the current element of the array.
			cout << numbers[count] << endl;
		}
	}
}
