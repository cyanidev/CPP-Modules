#include "PhoneBook.hpp"

std::string trunc_string(const std::string & str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	else
		return str;
}

void	PhoneBook::addContact(const Contact & contact)
{
	if (size < 8)
	{
		contacts[size] = contact;
		++size;
	}
	else
	{
		contacts[oldestContact] = contact;
		oldestContact = (oldestContact + 1) % 8;
	}
}

void PhoneBook::displayContacts() const
{
	int i = 0;

	std::cout << std::setw(10) << "Index" << "|"
			<< std::setw(10) << "First Name" << "|"
			<< std::setw(10) << "Last Name" << "|"
			<< std::setw(10) << "Nickname" << "|" << std::endl;
	while(i < size)
	{
		std::cout << std::setw(10) << i << "|"
				<< std::setw(10) << trunc_string(contacts[i].getFirstName()) << "|"
				<< std::setw(10) << trunc_string(contacts[i].getLastName()) << "|"
				<< std::setw(10) << trunc_string(contacts[i].getNickname()) << "|" << std::endl;
		i++;
	}	
}

void PhoneBook::searchContact(int index) const
{
	if (std::cin.fail())
	{
		std::cin.clear(); // Clear the fail state
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore the invalid input
		std::cout << "Invalid input! Please enter a valid index (integer)." << std::endl;
		return;
	}
	if (index >= 0 && index < size)
		contacts[index].printContact();
	else
		std::cout << "invalid index!" << std::endl;
}
