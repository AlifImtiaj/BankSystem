#include "account.h"
#include <iostream>
#include <limits>

void account::CreateNewAccount() {
	std::cout << "Enter full name: ";
	std::getline(std::cin, m_fullname);
	std::cout << "Enter date of birth (format: dd/mm/yyyy): ";
	std::getline(std::cin, m_dob);
	char genderChoice = 0;
	while (genderChoice != 'M' && genderChoice != 'F') {
		std::cout << "Enter gender (M or F): ";
		std::cin >> genderChoice;

		if (genderChoice != 'M' && genderChoice != 'F') {
			std::cout << "Invalid input. Please enter M or F.\n";
		}
	}
	if (genderChoice == 'M') m_gender = Gender::MALE;
	else m_gender = Gender::FEMALE;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter address: ";
	std::getline(std::cin, m_address);

	std::cout << "Enter E-Mail: ";
	std::getline(std::cin, m_email);

	std::cout << "Account created successfully!!\n";


	
}

bool account::SignIn()
{
	return false;
}
