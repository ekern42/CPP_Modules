/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekern <ekern@student.42lausanne.ch>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/06 15:20:14 by ekern             #+#    #+#             */
/*   Updated: 2023/04/06 15:31:16 by ekern            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
# include <iostream>
# include <string>
# include <iomanip>

int	main()
{
	std::string	command_line;
	std::cout << "---PhoneBook---" << std::endl;
	std::cout << "What do you want ?" << std::endl;
	while (1)
	{
		std::cin >> command_line;
		if (std::cin.eof())
			break;
		if (command_line == "ADD")
			std::cout << "Added" << std::endl;
		else if (command_line == "SEARCH")
			std::cout << "Searched" << std::endl;
		else if (command_line == "EXIT")
		{
			std::cout << "Exited" << std::endl;	
			return 0;
		}
		else
			std::cout << "Ignored" << std::endl;
	}
	return (0);
}