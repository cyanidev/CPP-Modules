#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <array>
#include <iostream>
#include <iomanip>

class PhoneBook 
{
	private:
		std::array<Contact, 8> contacts;
		int size;
		int oldestContact;

	public:
		PhoneBook() : size(0), oldestContact(0) {}
	
	void	addContact(const Contact & contact);
	void	displayContacts() const;
	void	searchContact(int index) const;
};

#endif