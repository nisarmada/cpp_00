/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: nsarmada <nsarmada@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2025/01/27 10:37:14 by nsarmada      #+#    #+#                 */
/*   Updated: 2025/01/27 11:10:17 by nsarmada      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main (int ac, char **av)
{
	char	result;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
	{
		for (int i = 1; i < ac; ++i)
		{
			for (int j = 0; av[i][j]; ++j)
			{
				result = std::toupper(av[i][j]);
				std::cout << result;
			}
		}
	}
	std::cout << std::endl;
	return (0);
}