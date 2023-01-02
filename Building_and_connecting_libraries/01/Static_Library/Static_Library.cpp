#include <iostream>
#include "Greeter.h"

int main()
{
	setlocale(LC_ALL, "Russian"); 
	std::cout << std::endl;

	std::string nameOfPerson;

	std::cout << "Введите имя: ";
	std::cin >> nameOfPerson;

	Greeter person1(nameOfPerson);

	std::cout << person1.greet() << std::endl;
}