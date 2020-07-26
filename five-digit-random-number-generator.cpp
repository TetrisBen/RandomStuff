#include <iostream>
#include <sstream>

int getNumberFromUser() {

	std::string input;
	do {
		std::cout << "\nEnter a number between 10000-99999: ";
		std::cin >> input;
	}
	while(input.length() != 5);

	std::stringstream stoi(input);
	int convertedToInt{};
	stoi >> convertedToInt;
	return convertedToInt;
}

int genRandomNumber(int numberEnteredByUser) {
	std::srand((unsigned)time(0));
	int randomNumber{};
	int max{100000};
    int min{10000};
	int range{max - min};
	int count{0};
	while (randomNumber != numberEnteredByUser) {
		randomNumber = (std::rand() % range + min);
		count++;
		std::cout << "Iteration: " << count << "    " << "Current Value: " << randomNumber << '\r' << std::flush;
	}
	std::cout << std::endl;
	return randomNumber;
}

int main() { 

	int numberEnteredByUser { getNumberFromUser() };
	genRandomNumber(numberEnteredByUser);
	 
}