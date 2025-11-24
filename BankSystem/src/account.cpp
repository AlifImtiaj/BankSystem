#include "account.h"
#include <iostream>
#include <limits>
#include <fstream>

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

	std::string fileName = m_fullname + ".txt";
	std::fstream stream(fileName.c_str(), std::ios::out);
	if (stream.is_open()) {
		stream << "Full Name: " << m_fullname << std::endl;
		stream << "Date of birth: " << m_dob << std::endl;
		if (m_gender == Gender::MALE)
			stream << "Gender: Male\n";
		else
			stream << "Gender: Female\n";

		stream << "Address: " << m_address << std::endl;
		stream << "E-Mail: " << m_email << std::endl;
		std::cout << "Account created successfully!!\n";
	}
	else {
		std::cout << "File creation failed!!!\n";
	}
	
}

bool account::SignIn()
{
	return false;
}
