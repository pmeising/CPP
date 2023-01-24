/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 21:40:26 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 21:44:40 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _WEAPON_HPP
# define _WEAPON_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

class Weapon
{
public:
	const std::string&	getType();
	void	setType(std::string type);

private:
	std::string	type;
};

#endif
