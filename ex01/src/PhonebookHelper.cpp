/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhonebookHelper.cpp                                :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/02/10 13:08:42 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/10 13:09:25 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

static std::string TruncateString(std::string str)
{
	if (str.length() <= 10)
		return (str);
	else
		return (str.substr(0, 9) + ".");
}

void Contact::DisplayContact(int index) const
{
	std::cout << std::setw(10) << index << "|"
		<< std::setw(10) << TruncateString(FirstName) << "|"
		<<std::setw(10) << TruncateString(LastName) << "|"
		<< std::setw(10) << TruncateString(NickName) << "|"
		<< std::setw(10) << TruncateString(PhoneNumber) << "|"
		<< std::setw(10) << TruncateString(DarkestSecret) << std::endl;
}

void PhoneBook::PrintTable() const
{
	std::cout << std::setw(10) << "Index" << "|"
		<< std::setw(10) << "First Name" << "|"
		<< std::setw(10) << "Last Name" << "|"
		<< std::setw(10) << "Nickname" << std::endl;
		for (int i = 0; i < ContactCount; i++)
		{
			contacts[i].DisplayContact(i);
		}
}

void  PhoneBook::DisplayOne(int index) const
{
	const Contact& contact = this->contacts[index];

	std::cout << "Displaying Contact at index " << index << std::endl;
	std::cout << "First Name: " << contact.getFirstName() << std::endl;
	std::cout << "Last Name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone Number: " << contact.getPhoneNumber() << std::endl;
	std::cout << "Darkest Secret: " << contact.getDarkestSecret() << std::endl;

}
