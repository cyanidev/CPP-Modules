#ifndef CONTACT_H
#define CONTACT_H

#include <string>
#include <iostream>
#include <limits>

class Contact 
{
	private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	public:
	Contact() {}
	Contact(std::string firstName, std::string lastName, std::string nickname,
		std::string phoneNumber, std::string darkestSecret)
		: firstName(firstName), lastName(lastName), nickname(nickname),
		phoneNumber(phoneNumber), darkestSecret(darkestSecret)
	{}

	std::string getFirstName() const { return firstName; }
	std::string getLastName() const { return lastName; }
	std::string getNickname() const { return nickname; }
	std::string getPhoneNumber() const { return phoneNumber; }
	std::string getDarkestSecret() const { return darkestSecret; }


	void printContact() const;
};

#endif