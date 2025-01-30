/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 14:14:46 by nikos         #+#    #+#                 */
/*   Updated: 2025/01/30 13:49:27 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : ContactCount(0) {}

static void printContact(const Contact& contact)
{
	std::cout << "First Name " << contact.getFirstName() << std::endl;
	std::cout << "Last " << contact.getLastName() << std::endl;
	std::cout << "nickname " << contact.getNickName() << std::endl;
	std::cout << "phone number " << contact.getPhoneNumber() << std::endl;
	std::cout << "darkest secret " << contact.getDarkestSecret() << std::endl;
}

static void getContact(std::string message, std::string& input)
{
	std::cout << message << std::endl;
	std::getline(std::cin, input);
}

static bool IsValidPhoneNumber(std::string input)
{
	if (input[0] != '+' && !isdigit(input[0]))
	{
		std::cout << "Provide valid phone number" << std:: endl;
		return (false);
	}
	for (int i = 1; i < 10; i++)
	{
		if (!isdigit(input[i]))
		{
			std::cout << "Provide valid phone number" << std:: endl;
			return (false);
		}
	}
	return (true);
}

void PhoneBook::addContact()
{
	Contact		NewContact;
	std::string input;

	if (ContactCount >= 8)
		ContactCount = 0;
	getContact("Enter First Name", input);
	NewContact.setFirstName(input);
	getContact("Enter Last name", input);
	NewContact.setLastName(input);
	getContact("Enter Nickname", input);
	NewContact.setNickName(input);
	getContact("Enter phone number", input);
	while (!IsValidPhoneNumber(input))
		std::getline(std::cin, input);
	NewContact.setPhoneNumber(input);
	getContact("Enter Darkest secret", input);
	NewContact.setDarkestSecret(input);

	printContact(NewContact);
	contacts[ContactCount] = NewContact;
	ContactCount++;
}
