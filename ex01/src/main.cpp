/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: nikos <nikos@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/28 15:53:32 by nikos         #+#    #+#                 */
/*   Updated: 2025/01/28 15:57:12 by nikos         ########   odam.nl         */
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
		if (command == "ADD")
			phonebook.addContact();
		else if (command == "EXIT")
			break;
		else
			std::cout << "Try again later:)" << std::endl;
	}
	return (0);
}