/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 14:24:18 by nikos         #+#    #+#                 */
/*   Updated: 2025/01/28 15:11:57 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Contact.hpp"

//setter functions

Contact::Contact() : FirstName(""), LastName(""), NickName(""),
	PhoneNumber(""), DarkestSecret(""){}

void Contact::setFirstName(const std::string& FirstName)
{
	this->FirstName = FirstName;
}

void Contact::setLastName(const std::string& LastName)
{
	this->LastName = LastName;
}

void Contact::setNickName(const std::string& NickName)
{
	this->NickName = NickName;
}

void Contact::setPhoneNumber(const std::string& PhoneNumber)
{
	this->PhoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(const std::string& DarkestSecret)
{
	this->DarkestSecret = DarkestSecret;
}

//getter functions

std::string Contact::getFirstName() const
{
	return (this->FirstName);
}

std::string Contact::getLastName() const
{
	return (this->LastName);
}

std::string Contact::getNickName() const
{
	return (this->NickName);
}

std::string Contact::getPhoneNumber() const
{
	return (this->PhoneNumber);
}

std::string Contact::getDarkestSecret() const
{
	return (this->DarkestSecret);
}