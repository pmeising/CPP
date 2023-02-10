/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:17:53 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/10 15:47:53 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Example input: 
// 'a', '2983', 39283.02' etc.

void	printToInt(std::string& str)
{
	int	i;

	i = const_cast<int>
	std::cout << str;
}

void	printToDouble(std::string& str)
{
	std::cout << str;
}

void	printToFloat(std::string& str)
{
	std::cout << str;
}

int	trueType(std::string& str)
{
	int pos = str.find_first_not_of(" \t\r\n");
	std::string		str_1 = (&str[pos]);
	if (!(std::isalnum(str[pos])) && (str[pos] != '+') && (str[pos] != '-')) // is it's not alphanumeric or a plus or minus sign, it's not valid for this conversion.
		return (-1);
	if ((!std::isalpha(str[pos])) && str_1.find('f') != std::string::npos)
		return (3);
	else if ((!std::isalpha(str[pos])) && (str_1.find('.')) != std::string::npos)
		return (2);
	else if (std::isalpha(str[pos]))
		return (0);
	else
		return (1);
}

void	ScalarConverter::convert(std::string str)
{
	std::string		type[4] = {"char", "int", "double", "float"}; // 0 = char 1 = int 2 = double 3 = float
	int		true_type;
	true_type = trueType(str);
	std::cout << "This: " << str << " is recognized as a(n) " << type[true_type] << "\n";
	// int		i;
	// char	c;
	// double	d;
	// float	f;
	
	switch (true_type)
	{
		case 0:
		printToInt(str);
		printToDouble(str);
		printToFloat(str);
		break;
	}
}
