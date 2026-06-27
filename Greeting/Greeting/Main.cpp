#include <iostream>
#include<string>
#include <limits>
int main() {
	std::cout << "Please enter your name" << std::endl;
	std::string name;
	std::string answer_by_age;
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
	if (age < 25){
		answer_by_age = ", you are only " + std::to_string(age) + " years old.";
	}
	else if (age < 50) {
		answer_by_age = ", you are already " + std::to_string(age) + " years old.";
	}
	else {
		answer_by_age = ",  you are very wise for your age.";
	}



	std::cout << "Hello " << name << answer_by_age<< std::endl;
	

}