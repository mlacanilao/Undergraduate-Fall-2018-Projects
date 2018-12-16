/* Homework #8
 * This program read as many test scores as the user wants from the keyboard and prints them in original order, low to high, high to low, highest score, lowest score, and average score.
 * Programmer: Michael Lacanilao
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const string PROGRAMMER = "Michael Lacanilao";	// The name of the programmer.

// Function prototypes.
int getNumberOfTestScores();
int getHighestTestScore(int [], int);
int getLowestTestScore(int [], int);
void getTestScores(int[], int);
void displayTestScores(int[], int);
void selectionSortAscending(int[], int);
void selectionSortDescending(int[], int);
double calculateAverageTestScore(int[], int);

int main()
{
	// Define variables.
	int totalNumberOfTestScores,	// The total number of test scores.
		highestTestScore,			// The highest test score.
		lowestTestScore;			// The lowest test score.

	// Define array that will store the test scores.
	const int ARRAY_SIZE = 50;	// The size of the array.
	int testScores[ARRAY_SIZE];	// The array that will store the test scores.

	// Print title.
	cout << "Homework #8\n\n";

	// Get number of test scores. Call getNumberOfTestScores function. Store total number of test scores.
	totalNumberOfTestScores = getNumberOfTestScores();

	// Get test scores. Call getTestScores function.
	getTestScores(testScores, totalNumberOfTestScores);

	// Get highest test score. Call getHighestTestScore function. Store highest test score.
	highestTestScore = getHighestTestScore(testScores, totalNumberOfTestScores);

	// Get lowest test score. Call getLowestTestScore function. Store lowest test score.
	lowestTestScore = getLowestTestScore(testScores, totalNumberOfTestScores);

	// Print title for test scores in original order.
	cout << "\nTest Scores in Original Order\n"
		 << "*****************************\n";

	// Print test scores in original order. Call displayTestScores function. Pass array stored with test scores and total number of test scores.
	displayTestScores(testScores, totalNumberOfTestScores);

	// Print title for test scores in ascending order.
	cout << "\n\nTest Scores in Ascending Order\n"
		 << "******************************\n";

	// Sort test scores in ascending order. Call selectionSortAscending function. Pass array stored with test scores and total number of test scores.
	selectionSortAscending(testScores, totalNumberOfTestScores);

	// Print test scores in ascending order. Call displayTestScores function. Pass array stored with test scores and total number of test scores.
	displayTestScores(testScores, totalNumberOfTestScores);

	// Print title for test scores in descending order.
	cout << "\n\nTest Scores in Descending Order\n"
		 << "*******************************\n";

	// Sort test scores in descending order. Call selectionSortDescending function. Pass array stored with test scores and total number of test scores.
	selectionSortDescending(testScores, totalNumberOfTestScores);

	// Print test scores in descending order. Call displayTestScores function. Pass array stored with test scores and total number of test scores.
	displayTestScores(testScores, totalNumberOfTestScores);

	// Print title for highest test score.
	cout << "\n\nHighest Test Score\n"
		 << "******************\n";

	// Print highest test score.
	cout << highestTestScore;

	// Print title for lowest test score.
	cout << "\n\nLowest Test Score\n"
		 << "*****************\n";

	// Print lowest test score.
	cout << lowestTestScore;

	// Print title for average test score.
	cout << "\n\nAverage Test Score\n"
		 << "******************\n";

	// Print average test score. Call calculateAverageTestScore function. Pass array stored with test scores and total number of test scores.
	cout << fixed << showpoint << setprecision(2) << calculateAverageTestScore(testScores, totalNumberOfTestScores);
	
	// Print programmer name.
	cout << "\n\nPROGRAMMER: " << PROGRAMMER << endl;
	
	system("pause");
	return 0;
}

//*******************************************************************************************
// The getNumberOfTestScores function prompts the user for the total number of test scores.	*
//*******************************************************************************************

int getNumberOfTestScores()
{
	// Define variables.
	int totalNumberOfTestScores;

	// Prompt user for total number of test scores.
	cout << "Enter the number of test scores (2-50): ";
	cin >> totalNumberOfTestScores;

	// Input validation.
	while (totalNumberOfTestScores < 2 || totalNumberOfTestScores > 50)
	{
		// Print error. Prompt user for total number of test scores.
		cout << "Error. Enter the number of test scores (2-50): ";
		cin >> totalNumberOfTestScores;
	}

	// Return the total number of test scores.
	return totalNumberOfTestScores;
}

//*******************************************************************
// The getTestScores function prompts the user for the test scores.	*
//*******************************************************************

void getTestScores(int testScores[], int totalNumberOfTestScores)
{
	// Prompt user for test scores based on the total number of test scores entered.
	for (int i = 0; i < totalNumberOfTestScores; i++)
	{
		// Prompt user for the test score.
		cout << "Enter test score " << i + 1 << " (0-100): ";
		cin >> testScores[i];

		// Input validation.
		while (testScores[i] < 0 || testScores[i] > 100)
		{
			// Print error. Prompt user for the test score.
			cout << "Error. Enter test score " << i + 1 << " (0-100): ";
			cin >> testScores[i];
		}
	}
}

//***************************************************************************
// The displayTestScores function displays the test scores in the array.	*
//***************************************************************************

void displayTestScores(int testScores[], int totalNumberOfTestScores)
{
	// Prints test scores in the array.
	for (int i = 0; i < totalNumberOfTestScores; i++)
	{
		// Print current test score in the element.
		cout << testScores[i] << " ";
	}
}

//*******************************************************************************
// The selectionSortAscending function sorts an int array in ascending order.	*
//*******************************************************************************

void selectionSortAscending(int array[], int size)
{
	// Define variables.
	int minIndex,	// The subscript of the element with the smallest value.
		minValue;	// The value of the element with the smallest value.

	for (int start = 0; start < (size - 1); start++)
	{
		minIndex = start;
		minValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] < minValue)
			{
				minValue = array[index];
				minIndex = index;
			}
		}
		// Swap numbers. Call swap function. Passes the element found with the smallest value and the starting element. Swaps the values.
		swap(array[minIndex], array[start]);
	}
}

//*******************************************************************************
// The selectionSortDescending function sorts an int array in descending order.	*
//*******************************************************************************

void selectionSortDescending(int array[], int size)
{
	// Define variables.
	int maxIndex,	// The subscript of the element with the largest value.
		maxValue;	// The value of the element with the largest value.

	for (int start = 0; start < (size - 1); start++)
	{
		maxIndex = start;
		maxValue = array[start];
		for (int index = start + 1; index < size; index++)
		{
			if (array[index] > maxValue)
			{
				maxValue = array[index];
				maxIndex = index;
			}
		}
		// Swap numbers. Call swap function. Passes the element found with the largest value and the starting element. Swaps the values.
		swap(array[maxIndex], array[start]);
	}
}

//***********************************************
// The swap function swaps a and b in memory.	*
//***********************************************

void swap(int &a, int &b)
{
	// Define variables and store temporary value in temp.
	int temp = a;
	a = b;
	b = temp;
}

//*******************************************************************************
// The calculateAverageTestScore function calculates the average test score.	*
//*******************************************************************************

double calculateAverageTestScore(int testScores[], int totalNumberOfTestScores)
{
	// Define variables.
	int sum = 0;	// The sum of all test scores.

	// For loop to sum all test scores.
	for (int i = 0; i < totalNumberOfTestScores; i++)
	{
		// Sum all test scores.
		sum += testScores[i];
	}

	// Calculate and return average test score.
	return static_cast<double>(sum) / totalNumberOfTestScores;
}

//*******************************************************************
// The getHighestTestScore function finds the highest test score.	*
//*******************************************************************

int getHighestTestScore(int testScores[], int totalNumberOfTestScores)
{
	// Define variables.
	int highestTestScore = testScores[0];	// Set the highest test score.

	// Linear search for the highest test score.
	for (int i = 0;i < totalNumberOfTestScores;i++)
	{
		// If the test score in the current element is greater than the highest test score.
		if (testScores[i] > highestTestScore)
		{
			// Set highest test score with the value in the element with the greater test score.
			highestTestScore = testScores[i];
		}
	}

	// Return the highest test score in the array.
	return highestTestScore;
}

//***************************************************************
// The getLowestTestScore function finds the lowest test score.	*
//***************************************************************

int getLowestTestScore(int testScores[], int totalNumberOfTestScores)
{
	// Define variables.
	int lowestTestScore = testScores[0];	// Set the lowest test score.

	// Linear search for the highest test score.
	for (int i = 0; i < totalNumberOfTestScores; i++)
	{
		// If the test score in the current element is lower than the lowest test score.
		if (testScores[i] < lowestTestScore)
		{
			// Set lowest test score with the value in the element with the lowest test score.
			lowestTestScore = testScores[i];
		}
	}

	// Return the lowest test score in the array.
	return lowestTestScore;
}