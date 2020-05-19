#include <iostream>

int main() {

	int a;

    std::cout << "Digit a number: ";
    std::cin >> a;

	if (a < 0) {
		std::cout << "You entered a Negative number" << std::endl;
	}

    else if (a > 0) {
        std::cout << "You entered a Positive number" << std::endl;
    }

    else {
        std::cout << "By exclusion, you entered zero" << std::endl;
    }


    char gear;

    std::cout << "Digit a letter [a/b/p/n]: ";
    std::cin >> gear;

    if (gear == 'a') {
        std::cout << "acceleration" << std::endl;
    }
    else if (gear == 'b') {
        std::cout << "braking" << std::endl;
    }
    else if (gear == 'p') {
        std::cout << "parking" << std::endl;
    }
    else if (gear == 'n') {
        std::cout << "neutral" << std::endl;
    }
    else {
        std::cout << "Invalid gear" << std::endl;
    }

    

    if (a > 0 && gear == 'a') {
        std::cout << "Accelerating with Positive speed" << std::endl;
    }
    else if (a < 0 && gear == 'p') {
        std::cout << "Going Reverse with Negative Speed" << std::endl;
    }
    else if (a == 0 && gear == 'b') {
        std::cout << "Braked/Stopped with Zero speed" << std::endl;
    }
    else {
        std::cout << "Incompatible set of Speed and Gear" << std::endl;
    }

    /* 
    * TODO: Use this as a playground for writing if, else if and else statements
    * To get you started here, are some ideas:
    * 
    * 1. Create an integer variable and a set of if, elseif and else statements that
    * output whether the number is positive or negative.
    * 
    * 2. Create a character variable containing 'a' for acceleration, 'b' for braking, 
    * 'p' for parked, or 'n' for neutral and outputs whether or not the vehicle is accelerating, braking, 
    * parked or in neutral.
    *
    * Practice Using Boolean Logic
    *
    * You can see an example solution in the solution.cpp file
    */
    
    return 0;
}
