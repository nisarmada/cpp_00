/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 14:14:46 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/10 13:09:21 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

PhoneBook::PhoneBook() : ContactCount(0) {}

// static void printContact(const Contact& contact)
// {
// 	std::cout << "First Name " << contact.getFirstName() << std::endl;
// 	std::cout << "Last " << contact.getLastName() << std::endl;
// 	std::cout << "nickname " << contact.getNickName() << std::endl;
// 	std::cout << "phone number " << contact.getPhoneNumber() << std::endl;
// 	std::cout << "darkest secret " << contact.getDarkestSecret() << std::endl;
// }

static void getContact(std::string message, std::string& input)
{
	while (true)
	{
		std::cout << message << std::endl;
		std::getline(std::cin, input);
		if (!input.empty())
			return ;
		std::cout << "Input cannot be empty. Please try again:)" << std::endl;
	}
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

	// printContact(NewContact);
	contacts[ContactCount] = NewContact;
	ContactCount++;
}

// static std::string TruncateString(std::string str)
// {
// 	if (str.length() <= 10)
// 		return (str);
// 	else
// 		return (str.substr(0, 9) + ".");
// }

// void Contact::DisplayContact(int index) const
// {
// 	std::cout << std::setw(10) << index << "|"
// 		<< std::setw(10) << TruncateString(FirstName) << "|"
// 		<<std::setw(10) << TruncateString(LastName) << "|"
// 		<< std::setw(10) << TruncateString(NickName) << "|"
// 		<< std::setw(10) << TruncateString(PhoneNumber) << "|"
// 		<< std::setw(10) << TruncateString(DarkestSecret) << std::endl;
// }

// void PhoneBook::PrintTable() const
// {
// 	std::cout << std::setw(10) << "Index" << "|"
// 		<< std::setw(10) << "First Name" << "|"
// 		<< std::setw(10) << "Last Name" << "|"
// 		<< std::setw(10) << "Nickname" << std::endl;
// 		for (int i = 0; i < ContactCount; i++)
// 		{
// 			contacts[i].DisplayContact(i);
// 		}
// }

// void  PhoneBook::DisplayOne(int index) const
// {
// 	const Contact& contact = this->contacts[index];

// 	std::cout << "Displaying Contact at index " << index << std::endl;
// 	std::cout << "First Name: " << contact.getFirstName() << std::endl;
// 	std::cout << "Last Name: " << contact.getLastName() << std::endl;
// 	std::cout << "Nickname: " << contact.getNickName() << std::endl;
// 	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
// 	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;

// }

void PhoneBook::searchContact() const
{
	std::string IndexString;
	int			index = -1;

	if (ContactCount == 0)
	{
		std::cout << "Phonebook is empty" << std::endl;
		return;
	}
	PrintTable();
	std::cout << "Input an index to look for a specific contact" << std::endl;
	// std::getline(std::cin, IndexString);
	while (1)
	{
			std::getline(std::cin, IndexString);
			if (IndexString.find_first_not_of("0123456789") == std::string::npos)
			{
				index = atoi(IndexString.c_str());\
			}
			if (index >=0 && index < ContactCount)
				break ;
			else	
			{
				std::cout << "Provide a number between 0 and " << ContactCount - 1
				<< std::endl;
			}
	}
	DisplayOne(index);
}

