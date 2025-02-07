/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 15:53:32 by nikos         #+#    #+#                 */
/*   Updated: 2025/02/07 16:53:20 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/PhoneBook.hpp"

int main()
{
	PhoneBook phonebook;
	std::string command;

	while (true)
	{
		std::cout << "Enter Command" << std::endl;
		std::getline(std::cin, command);
		if (!std::getline(std::cin, command))
            break;
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "SEARCH")
			phonebook.searchContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Try again later:)" << std::endl;
	}
	return (0);
}