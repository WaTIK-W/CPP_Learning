#include <iostream>

int readAnswer()
{
	std::cout << "Enter a number: ";
	int number;
	std::cin >> number;
	return number;
}

void writeAnswer(int number1, int number2)
{
	std::cout << "Answer: " << number1 + number2 << std::endl;
}