#include "UserLib.hpp"

void HelloWorld()
{
	std::cout << "Hello World!\n";
}

void Summ()
{
	std::cout << "We are try to get summ of two numbers\n";
	std::cout << "Please enter first of it: ";
	int number_one{};
	std::cin >> number_one;
	std::cout << "Please enter second of it: ";
	int number_two{};
	std::cin >> number_two;
	auto result = number_one + number_two;
	std::cout << "Summ of your numbers is " << result;
}

void UserHello(std::string who) {
	std::cout << "Hello, " << who << '\n';
}