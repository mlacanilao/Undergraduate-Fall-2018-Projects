/* 
Homework #5 Part 2
Programmer: Michael Lacanilao
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	// Define variables.
	ifstream inputFile;  // The input file stream object.

	ofstream outputFile; // The output file stream object.

	string currentUserDataFileLine, // The string to hold the data file's lines.
		   userStreetAddress,       // The user's street address.
		   userCityStateZip,		// The user's city, state, and zip code address.
		   userPhone,				// The user's phone number.
		   userName;				// The user's name.

	// Print title.
	cout << "HOMEWORK 5 PART II\n\n";

	// Prompt user for their name.
	cout << "Enter the name of the user: ";
	getline(cin, userName);

	// Prompt user for their phone number.
	cout << "Enter the phone number of the user with dashes: ";
	getline(cin, userPhone);

	// Prompt user for their street address.
	cout << "Enter the user's street address: ";
	getline(cin, userStreetAddress);

	// Prompt user for their city, state, and zip code address.
	cout << "Enter the user's city, state, and zip code: ";
	getline(cin, userCityStateZip);

	// Create and open output file.
	outputFile.open("userData.txt");

	// Send user data to output file.
	outputFile << "Name: " << userName << endl 
			   << "Phone Number: " << userPhone << endl
			   << "Address: " << userStreetAddress << endl
			   << "\t " << userCityStateZip << endl;

	// Close output file.
	outputFile.close();

	cout << "\n********************************************************************\n\n";

	// Open input file.
	inputFile.open("userData.txt");

	if (inputFile)
	{
		// While there is information in the data file. 
		while (getline(inputFile, currentUserDataFileLine))
		{
			// Print information in the current data line.
			cout << currentUserDataFileLine << endl;
		}
	}
	else
	{
		// Print error if file doesn't open.
		cout << "Error opening file.";
	}
	
	// Close input file.
	inputFile.close();
	
	system("pause");
	return 0;
}
