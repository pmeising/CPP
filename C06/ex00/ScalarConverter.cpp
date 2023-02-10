/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 11:17:53 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/10 11:26:27 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// Example input: 
// 'a', '2983', 39283.02' etc.

int	trueType(std::string str)
{
	
}

void	ScalarConverter::convert(std::string str)
{
	int		type[4] = {0, 1, 2, 3};
	int		true_type;
	true_type = trueType(str);
}
