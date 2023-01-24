/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 17:17:20 by pmeising          #+#    #+#             */
/*   Updated: 2023/01/24 21:01:49 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _ZOMBIE_HPP
# define _ZOMBIE_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>
#define DEFAULT "\033[0;39m"
#define B_RED "\033[1;31m"
#define B_BLUE "\033[1;94m"
#define B_YELLOW "\033[1;33m"
#define B_GREEN "\033[1;32m"
#define B_PINK "\033[1;35m"

class Zombie
{
public:
	void	announce(void);
	Zombie* zombieHorde(int N, std::string name);

private:
	std::string	name;
};

#endif
