// Incrabyte.cpp : Defines the entry point for the application.
//

#include "Incrabyte.h"

int main()
{
	std::string data;
	std::string* pointer = &data;

	cout << pointer << endl;

	std::getline(cin, data);

	cout << pointer << endl;

	return 0;
}
