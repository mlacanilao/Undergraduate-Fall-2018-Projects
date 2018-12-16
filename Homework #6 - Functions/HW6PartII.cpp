/* 
 *Homework #6 Part 2
 *This program is for a soda vending machine.
 *Programmer: Michael Lacanilao
*/

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

// Define global constants.
const double COKE_PRICE = 1.25, // The price of coke.
PEPSI_PRICE = 1.00,				// The price of pepsi.
WATER_PRICE = 2.00,				// The price of water.
COFFEE_PRICE = 1.50,			// The price of coffee.
TAX = 0.06;						// The sales tax.

const int COKE_CHOICE = 1, // Menu choice for coke.
PEPSI_CHOICE = 2,		   // Menu choice for pepsi.
WATER_CHOICE = 3,		   // Menu choice for water.
COFFEE_CHOICE = 4,		   // Menu choice for coffee.
EXIT_CHOICE = 5;		   // Menu choice to quit.

// Function prototypes.
void showMenu();
void takePurchase(int &, int &);
double calculatePurchase(int, int);
double takePayment(double);
double calculateChange(double, double);

int main()
{
	// Define constants.
	const string PROGRAMMER = "Michael Lacanilao"; // The programmer's name. 

	// Define variables.
	int item,	  // The user's menu choice.
		quantity; // The number of items.

	double paymentAmount, // The user's payment.
	       totalAmount,	  // The total amount.
		   change;		  // The total amount of change.

	// Output settings.
	cout << fixed << showpoint << setprecision(2);

	// Print title.
	cout << "WORKING WITH FUNCTIONS\n\n";

	// Call show menu function.
	showMenu();
		
	// Call take purchase function. Pass reference variables item and quantity.
	takePurchase(item, quantity);

	// If item is not exit choice.
	if (item != EXIT_CHOICE)
	{
		// Call calculate purchase function and store in total amount. Pass item and quantity values.
		totalAmount = calculatePurchase(item, quantity);

		// Call take payment function and store in payment amount. Pass total amount value.
		paymentAmount = takePayment(totalAmount);
			
		// Call calculate change function and store in change. Pass total amount and payment amount.
		change = calculateChange(totalAmount, paymentAmount);

		// Print total amount, payment amount, and change.
		cout << "\nThe total amount of the purchase, including tax = $" << totalAmount << endl
			 << "The amount of payment = $" << paymentAmount << endl
			 << "The amount of change returned = $" << change << "\n\n";
	}
	else
	{
		// Print exiting.
		cout << "Exiting program.\n\n";
	}
	
	// Print programmer name.
	cout << "Programmer: " << PROGRAMMER << endl;

	system("pause");
	return 0;
}

//***********************************************************
// Definition of function showMenu.							*
// This function print out the soda vending machine menu.	*	
//***********************************************************

void showMenu()
{
	// Print soda vending machine menu.
	cout << "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "Soda Vending Machine" << "|" << setw(25) << left << "Price" << "|\n"
		<< "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "1. Coke" << "|" << left << "$" << setw(24) << left << COKE_PRICE << "|\n"
		<< "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "2. Pepsi" << "|" << left << "$" << setw(24) << left << PEPSI_PRICE << "|\n"
		<< "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "3. Water" << "|" << left << "$" << setw(24) << left << WATER_PRICE << "|\n"
		<< "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "4. Coffee" << "|" << left << "$" << setw(24) << left << COFFEE_PRICE << "|\n"
		<< "-----------------------------------------------------\n"
		<< "|" << setw(25) << left << "5. Exit Menu" << "|" << setw(25) << "" << "|\n"
		<< "-----------------------------------------------------\n\n";
}

//***************************************************************
// Definition of function takePurchase.							*
// This function prompts the user for the item and quantity.	*	
//***************************************************************

void takePurchase(int &item, int &quantity)
{
	// Prompt user for the item.
	cout << "Please enter the number of your choice from the menu: ";
	cin >> item;
	cin.ignore(256, '\n');

	// Input validation.
	while (item < 1 || item > 5)
	{
		// Prompt user for the item.
		cout << "Error. Please re-enter the number of your choice from the menu: ";
		cin >> item;
		cin.ignore(256, '\n');
	}

	// If item is not exit choice. 
	if (item != 5)
	{
		// Prompt user for the quantity.
		cout << "Please enter the number of this drink you want: ";
		cin >> quantity;
		cin.ignore(256, '\n');

		// Input validation.
		while (quantity < 1)
		{
			// Prompt user for the quantity.
			cout << "Error. Please re-enter the number of this drink you want: ";
			cin >> quantity;
			cin.ignore(256, '\n');
		}
	}
}

//*******************************************************
// Definition of function calculatePurchase.			*
// This function calculates the total amount with tax.	*	
//*******************************************************

double calculatePurchase(int item, int quantity)
{
	// Define variables.
	double salePrice = 0, // The sale price without tax.
		   totalAmount;   // The total amount with tax.

	// Calculate sale price based on item choice.
	switch (item)
	{
		case COKE_CHOICE:
		{
			salePrice = COKE_PRICE * quantity;
		}
		break;

		case PEPSI_CHOICE:
		{
			salePrice = PEPSI_PRICE * quantity;
		}
		break;

		case WATER_CHOICE:
		{
			salePrice = WATER_PRICE * quantity;
		}
		break;

		case COFFEE_CHOICE:
		{
			salePrice = COFFEE_PRICE * quantity;
		}
		break;

		case EXIT_CHOICE:
		break;

		default:
		break;
	}
	// Calculate total amount and return value to main function.
	return totalAmount = (salePrice + (salePrice * TAX));
}

//***************************************************
// The definition of function takePayment. 			*
// This functions gets the payment from the user.	*	
//***************************************************

double takePayment(double totalAmount)
{
	// Define variables.
	double paymentAmount; // The user's payment amount.

	// Prompt user for the payment amount.
	cout << "Please enter the payment amount $";
	cin >> paymentAmount;
	cin.ignore(256, '\n');

	// Input validation if payment amount is less than total amount.
	while (paymentAmount < totalAmount)
	{
		// Prompt user for the payment amount.
		cout << "Error. Please re-enter at least the minimum payment amount ($" << totalAmount << ") $";
		cin >> paymentAmount;
		cin.ignore(256, '\n');
	}

	// Return the value of payment amount to main function.
	return paymentAmount;
}

//***************************************************
// The definition of the function calculateChange.	*
// This function calculates the change.				*	
//***************************************************

double calculateChange(double totalAmount, double paymentAmount)
{
	// Calculate change and return value to main function.
	return paymentAmount - totalAmount;
}