#pragma once
#include <string>

enum class Gender {
	MALE,
	FEMALE
};
class account {
private:
	// login to the bank app
	std::string m_username;
	std::string m_password;

	// if user creates a new account
	std::string m_fullname;
	std::string m_dob;
	Gender m_gender;

	std::string m_address;
	std::string m_email;

public:
	account() = default;
	void CreateNewAccount();
	bool SignIn();
};

