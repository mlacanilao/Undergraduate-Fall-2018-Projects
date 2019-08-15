/*
Programmer: Michael Lacanilao
Homework #3
Calculates the final score and average score for a student.
*/

// Needed to perform C++ I/O
#include <iostream>

// Needed to use string class
#include <string>

// Needed to format output
#include <iomanip>

// Declares that the program will be accessing entities whose names are part of the space called std
using namespace std;

int main()
{
	// Student's name
	string name;

	// Participation Score
	int participationScore;

	// Test Score
	int testScore;

	// Assignment Score
	int assignmentScore;

	// Exam Score
	int examScore;

	// Practice Score
	int practiceScore;

	// Total Score
	int totalScore;

	// Average Score
	double averageScore;

	// Print title
	cout << "Homework #3\n\n";

	// Prompt student for first and last name
	cout << "Enter your first and last name: ";
	getline(cin, name);

	// Prompt student for participation score
	cout << "Enter your participation score (0-100): ";
	cin >> participationScore;

	// Prompt student for test score
	cout << "Enter your test score (0-100): ";
	cin >> testScore;

	// Prompt student for assignment score
	cout << "Enter your assignment score (0-100): ";
	cin >> assignmentScore;

	// Prompt student for exam score
	cout << "Enter your exam score (0-100): ";
	cin >> examScore;

	// Prompt student for practice score
	cout << "Enter your practice score (0-100): ";
	cin >> practiceScore;

	// Calculate total score
	totalScore = participationScore + testScore + assignmentScore + examScore + practiceScore;

	// Calculate average score
	averageScore = static_cast<double>(totalScore) / 5;

	// Print the average score rounded to the nearest hundredth
	cout << setprecision(2) << fixed << showpoint;
	cout << "Your average score is " << averageScore << ".\n\n";

	// Print programmer name
	cout << "Programmer: Michael Lacanilao\n";

	// Pauses screen
	system("pause");

	// Sends the integer value 0 back to the operating system upon the program's completion.
	// The value 0 usually indicates that a program executed sucessfully.
	return 0;
}