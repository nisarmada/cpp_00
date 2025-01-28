/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 14:17:33 by nikos         #+#    #+#                 */
/*   Updated: 2025/01/28 15:02:43 by nikos         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact
{
	private:
		std::string FirstName;
		std::string LastName;
		std::string NickName;
		std::string PhoneNumber;
		std::string DarkestSecret;
	
	public:
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
};

#endif