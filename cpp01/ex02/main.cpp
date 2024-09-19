#include <iostream>

int main()
{
	//string variable initialized
	std::string string = "HI THIS IS BRAIN";

	//pointer to string variable
	std::string *stringPTR = &string;

	//reference to string variable
	std::string &stringREF = string;

	//print memory address of string variable
	std::cout << "Memory address of string variable: " << &string << std::endl;

	//print memory address of string pointer
	std::cout << "Memory address held by string pointer: " << stringPTR << std::endl;

	//print memory address of string reference
	std::cout << "Memory address held by string reference: " << &stringREF << std::endl;

	//print string variable
	std::cout << "Value of string variable: " << string << std::endl;

	//value pointed to by string pointer
	std::cout << "Value pointed to by string pointer: " << *stringPTR << std::endl;

	//value pointed to by string reference
	std::cout << "Value pointed to by string reference: " << stringREF << std::endl;

	return (0);
}