#include <iostream>
#include<string>
#include <limits>
int main() {
	std::cout << "Please enter your name" << std::endl;
	std::string name;
	std::cin >> name;
	std::cout << "Enter your age ";
	int age;
	std::cin >> age;
	while (std::cin.fail()||age<0) {
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
		std::cout << "Enter	a valid age (a positive or null number) " << std::endl;
		std::cin >> age;


	}


	std::cout << "Your name is " << name << " and you are "<<age<<"." << std::endl;
}