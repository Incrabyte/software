#include "Incrabyte.h"

int encoder() {
	std::string data;
	std::string* pointer = &data;

	std::getline(cin, data);

	cout << "location: " << pointer << endl;

	return 0;
}