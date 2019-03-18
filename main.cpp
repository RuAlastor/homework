#include <iostream>
#include <string>
#include <algorithm>

void deleteRepeats(std::string&);

int main() {

	std::string input_string;
	std::cout << "Enter string:\n";
	std::cin >> input_string;
	deleteRepeats(input_string);
	std::cout << "String after deletion: " << input_string << "\n";

	system("pause");
	return 0;
}

void deleteRepeats(std::string& str) {
	if (str.length() > 1) {
		std::string::iterator first = str.begin();
		std::string::iterator last = str.end();
		std::string::iterator checker = first;
		while (++first != last) {
			if (*checker != *first) {
				*(++checker) = *first;
			}
		}
		str.resize(++checker - str.begin());
	}

	// str.resize( std::unique( str.begin(), str.end() ) - str.begin() );
}