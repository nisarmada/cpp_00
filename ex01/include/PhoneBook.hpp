/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 12:33:07 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/01/30 13:35:12 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <iostream>
#include <cctype>

class PhoneBook
{
	private:
		Contact contacts[8];
		int		ContactCount;

	public:
		PhoneBook();

		void addContact();
		void searchContact() const;
		void displayContact(int index) const;
};

#endif
