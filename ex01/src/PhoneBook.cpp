/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 14:14:46 by nikos         #+#    #+#                 */
/*   Updated: 2025/01/28 16:13:04 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : ContactCount(0) {}

static void printContact(const Contact& contact)
{
	std::cout << "First Name" << contact.getFirstName() << std::endl;
	std::cout << "Last" << contact.getLastName() << std::endl;
	std::cout << "nickname" << contact.getNickName() << std::endl;
	std::cout << "phone number" << contact.getPhoneNumber() << std::endl;
	std::cout << "drkest secret" << contact.getDarkestSecret() << std::endl;
}
void PhoneBook::addContact()
{
	Contact		NewContact;
	std::string input;

	if (ContactCount >= 8)
		ContactCount = 0;
	std::cout << "Enter First Name" << std::endl;
	std::getline(std::cin, input);
	NewContact.setFirstName(input);
	std::cout << "Enter Last Name" << std::endl;
	std::getline(std::cin, input);
	NewContact.setLastName(input);
	std::cout << "Enter Nickname" << std::endl;
	std::getline(std::cin, input);
	NewContact.setNickName(input);
	std::cout << "Enter Phone Number" << std::endl;
	std::getline(std::cin, input);
	NewContact.setPhoneNumber(input);
	std::cout << "Enter Darket Secret" << std::endl;
	std::getline(std::cin, input);
	NewContact.setDarkestSecret(input);

	// printContact(NewContact);
	// contacts[ContactCount];
	ContactCount++;
}