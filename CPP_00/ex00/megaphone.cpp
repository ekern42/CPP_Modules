/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekern <ekern@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/28 15:29:26 by ekern             #+#    #+#             */
/*   Updated: 2023/04/06 14:09:12 by ekern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>	//	std::cout, un printf
#include <locale>	//	std::toupper
#include <string>	//	std::string, stock chaine de charactere et plein autre info

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else if (ac >= 2)
	{
		for (int i = 1; i < ac; ++i)
		{
			std::string str= av[i];
			for (unsigned long n = 0; n<str.length(); ++n)
				std::cout << (char)std::toupper (str[n]); // char obligatoire, sinon print en int
			std::cout << " ";
		}
	}
	std::cout << std::endl;
	return (0);
}