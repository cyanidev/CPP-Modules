#include "PhoneBook.hpp"
#include "Contact.hpp"

int	main()
{
	PhoneBook the_phonebook;
	std::string command;
	while (1)
	{
		std::cout << "Enter command (ADD, SEARCH or EXIT): ";
		std::cin >> command;
		if (command == "EXIT")
			break;
		else if (command == "ADD")
		{
			std::string firstName, lastName, nickname, phoneNumber, darkestSecret;

			std::cout << "Enter First Name: ";
			std::cin >> firstName;
			std::cout << "Enter Last Name: ";
			std::cin >> lastName;
			std::cout << "Enter Nickname: ";
			std::cin >> nickname;
			std::cout << "Enter Phone Number: ";
			std::cin >> phoneNumber;
			std::cout << "Enter Darkest Secret: ";
			std::cin >> darkestSecret;

			if (firstName.empty() || lastName.empty() || nickname.empty() || phoneNumber.empty() || darkestSecret.empty())
			{
				std::cout << "All fields must be filled. Try again.\n";
				continue;
			}
			Contact newContact(firstName, lastName, nickname, phoneNumber, darkestSecret);
			the_phonebook.addContact(newContact);
			std::cout << "contact added!\n";
		}
		else if (command == "SEARCH")
		{
			the_phonebook.displayContacts();
			int index;
			std::cout << "Enter the index you want to display: ";
			std::cin >> index;
			the_phonebook.searchContact(index);
		}
		else
			std::cout << "Invalid command. Please use ADD, SEARCH or EXIT.\n";
	}
	return 0;
}