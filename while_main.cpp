#include <iostream>

int main() {

	int user_number;
	std::cout << "Digit a number: ";
	std::cin >> user_number;
	std::cout << "You entered: " << user_number << std::endl;

	while (user_number > 0) {
		std::cout << "Counting: " << user_number << std::endl;
		user_number = user_number - 1;
	}

	return 0;
}