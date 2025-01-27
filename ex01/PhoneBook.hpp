/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 12:33:07 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/01/27 15:55:10 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <string>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	Public:
		Contact(); //Constructor
	
	//Setter functions
	void setFirstName(const std::string& FirstName);
	void setLastName(const std::string& LastName);
	void setNickName(const std::string& NickName);
	void setPhoneNumber(const std::string& PhoneNumber);
	void setDarkestSecret(const std::string& DarkestSecret);

	//getter functions
	std::string getFirstName() const;
	std::string getLastName() const;
	std::string getNickName() const;
	std::string getPhoneNumber() const;
	std::string getDarkestSecret() const;
}

#endif