/*
Programmer: Michael Lacanilao
Homework #3
Calculates the final score and average score for a student.
*/

#include <iostream>
#include <string>   
#include <iomanip> 
using namespace std;

int main ()
{
	// Defines the variables.
	string name;
	int    participationScore,
		   testScore,
		   assignmentScore,
		   examScore,
		   practiceScore,
		   totalScore;
	double averageScore;

	// Prints the title.
	cout << "HOMEWORK #3" << "\n\n";

	// Prompts the student for a first and last name and stores it.
	cout << "Enter your first and last name: ";
	getline(cin, name);

	// Prompts the student for his/her participation score and stores it.
	cout << "Enter your participation score (0-100): ";
	cin  >> participationScore;

	// Prompts the student for his/her test score and stores it.
	cout << "Enter your test score (0-100): ";
	cin  >> testScore;

	// Prompts the student for his/her assignment score and stores it.
	cout << "Enter your assignment score (0-100): ";
	cin  >> assignmentScore;

	// Prompts the student for his/her exam score and stores it.
	cout << "Enter your exam score (0-100): ";
	cin  >> examScore;

	// Prompts the student for his/her practice score and stores it.
	cout << "Enter your practice score (0-100): ";
	cin  >> practiceScore;

	// Calculates total score and average score.
	totalScore = participationScore + testScore + assignmentScore + examScore + practiceScore;
	averageScore = totalScore / 5.0;

	// Prints the total score and average score.
	cout << "\nYour total score is " << totalScore << "." << endl;
	
	// Prints the average score rounded to the nearest hundredth;
	cout << setprecision(2) << fixed;
    cout << "Your average score is " << averageScore << ".\n" << endl;

	// Prints the programmer name.
	cout << "Programmer: Michael Lacanilao" << endl;

	system("pause");
	return 0;
}