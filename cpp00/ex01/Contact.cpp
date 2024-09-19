#include "Contact.hpp"

void Contact::printContact() const
{
	std::cout << "First Name: " << firstName << "\n"
			 << "Last Name: " << lastName << "\n"
			 << "Nickname: " << nickname << "\n"
			 << "Phone number: " << phoneNumber << "\n"
			 << "Darkest Secret: " << darkestSecret << std::endl;
}