#include <iostream>

int main() {
	float vel;

	std::cout << "Digite a velocidade: ";
	std::cin >> vel;

	if (vel > 80) {
		std::cout << "Velocidade alta: " << vel << std::endl;
	}
	else {
		std::cout << "Velocidade baixa\n";
	}

	return 0;
}