/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 12:33:07 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/02/07 15:05:29 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"
#include <string>
#include <iomanip>
#include <iostream>
#include <cctype>
#include <stdexcept>
#include <cstdlib>

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
		void PrintTable() const;
		void DisplayOne(int index) const;

};

#endif
