/* 
Homework #4 Part 2
Programmer: Michael Lacanilao
This program determines the price for a portrait sitting.
*/

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Constants.
	const int SUBJECT_1 = 100,         // The base price for 1 subjects in the portrait.
	          SUBJECT_2 = 130,         // The base price for 2 subjects in the portrait.
	          SUBJECT_3 = 150,         // The base price for 3 subjects in the portrait.
	          SUBJECT_4 = 160,         // The base price for 4 subjects in the portrait.
	          SUBJECT_5_OR_MORE = 165; // The base price for 5 or more subjects in the portrait.

	const double FANCY_BACKGROUND_COST = .10, // The percent of extra cost on top of base price for a fancy background. 10%
	             SATURDAY_COST = .30,         // The percent of extra cost on top of base price for a portrait sitting on Saturday. 30%
	             SUNDAY_COST = .20;           // The percent of extra cost on top of base price for a portrait sitting on Sunday. 20%

	// Declare variables.
	int subjects; // The number of subjects in the portrait.
	
	double totalPrice, // The total price.
	       basePrice;  // The base price.
	
	string sittingAppointmentDay, // The sitting appointment day.
	       fancyBackground;       // The choice for a fancy background.

	// Print welcome message and fee schedule.
	cout << "Welcome! Thank you for choosing our business. The fee schedule for a portrait sitting is as follows:\n\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "Subjects in Portrait" << "|" << setw(25) << left << "Base Price" << "|\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "1" << "|" << left << "$" << setw(24) << left << SUBJECT_1 << "|\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "2" << "|" << left << "$" << setw(24) << left << SUBJECT_2 << "|\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "3" << "|" << left << "$" << setw(24) << left << SUBJECT_3 << "|\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "4" << "|" << left << "$" << setw(24) << left << SUBJECT_4 << "|\n"
	     << "-----------------------------------------------------\n"
	     << "|" << setw(25) << left << "5 or more" << "|" << left << "$" << setw(24) << left << SUBJECT_5_OR_MORE << "|\n"
	     << "-----------------------------------------------------\n\n";

	// Prompt customer for subjects.
	cout << "How many subjects will be in the portrait? ";
	cin >> subjects;
	cin.ignore();

	// Calculate base price.
	if (subjects == 1)
		basePrice = SUBJECT_1;
	else if (subjects == 2)
		basePrice = SUBJECT_2;
	else if (subjects == 3)
		basePrice = SUBJECT_3;
	else if (subjects == 4)
		basePrice = SUBJECT_4;
	else if (subjects >= 5)
		basePrice = SUBJECT_5_OR_MORE;
	else
		basePrice = 0;

	// Calculate total price.
	totalPrice = basePrice;

	// Print prices with appropriate decimal places.
	cout << setprecision(2) << fixed << showpoint;

	// Print current total price. Prompt customer to add a fancy background.
	cout << "Your current total price for " << subjects << " subject(s) is $" << totalPrice << ".\n\n";
	cout << "Would you like to add a fancy background? The add-on costs an extra 10% more than the base price? (Yes/No) ";
	cin  >> fancyBackground;
	cin.ignore();

	// Calculate total price with a fancy background.
	if (fancyBackground == "Yes")
	{
		totalPrice += basePrice * FANCY_BACKGROUND_COST;
		cout << "Your current total price for " << subjects << " subject(s) and a fancy background add-on is $" << totalPrice << ".\n";
	}

	// Prompt customer for sitting appointment day.
	cout << "\nFinally, what day would you like to schedule your sitting appointment? (ex. Monday/Tuesday/Saturday/Sunday)\n"
		 << "**Saturday costs an extra 30% more than the base price.**\n**Sunday costs an extra 20% more than the base price.**\n";
	cin  >> sittingAppointmentDay;
	cin.ignore();

	// Calculate total price based on sitting day.
	if (sittingAppointmentDay == "Sunday")
		totalPrice += basePrice * SUNDAY_COST;
	else if (sittingAppointmentDay == "Saturday")
		totalPrice += basePrice * SATURDAY_COST;
	
	// Print output and closing statements.
	cout << "\nOverall, your total price for a portrait sitting with " << subjects << " subject(s) on " << sittingAppointmentDay << " is $" << totalPrice << ".\n\n";

	cout << "Programmer: Michael Lacanilao\n";

	system("pause");
	return 0;
}
