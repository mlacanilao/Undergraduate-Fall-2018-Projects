// Michael Lacanilao

// Needed to perform C++ I/O
#include <iostream>

// Declares that the program will be accessing entities whose names are part of the space called std
using namespace std;

int main()
{
	// Print name, address, telephone number, and college major
	cout << "My name is Michael Lacanilao.\n"
		<< "My address is XXXX.\n"
		<< "My telephone number is (XXX) XXX-XXXX.\n"
		<< "My college major is Computer Science.\n";

	// Pause screen
	system("pause");

	// Sends the integer value 0 back to the operating system upon the program's completion.
	// The value 0 usually indicates that a program executed sucessfully.
	return 0;
}