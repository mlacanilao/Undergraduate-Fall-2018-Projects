/* 
Homework #4 Part 1
Programmer: Michael Lacanilao
*/


#include <iostream>
using namespace std;

int main()
{
	// Declare variables.
	int first,   // The first number.
		second,  // The second number.
		third,   // The third number.
		fourth,  // The fourth number.
		fifth,   // The fifth number.
		highest, // The highest number.
		lowest;  // The lowest number.

	// Prompt user for five integers. Read and store in variables.
	cout << "Please enter five different integer numbers: ";
	cin >> first >> second >> third >> fourth >> fifth;

	// Read and store highest and lowest number for if statements.
	highest = first;
	lowest = first;

	if (second > highest)
		highest = second;

	if (third > highest)
		highest = third;

	if (fourth > highest)
		highest = fourth;

	if (fifth > highest)
		highest = fifth;

	if (second < lowest)
		lowest = second;

	if (third < lowest)
		lowest = third;

	if (fourth < lowest)
		lowest = fourth;

	if (fifth < lowest)
		lowest = fifth;

	// Print results and closing statement.
	cout << "\nThe highest number is " << highest << " and the lowest number is " << lowest << ".\n\n";
	cout << "Programmer: Michael Lacanilao\n";

	system("pause");
	return 0;
}
