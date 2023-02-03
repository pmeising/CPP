/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 20:47:54 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/02 14:59:32 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONTRAP_HPP
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
	public:
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& object);
		DiamondTrap&	operator=(const DiamondTrap& rhs); // Again, rhs stands for right-hand-side.
		~DiamondTrap();
		std::string&	getName();
		void	setName(std::string& name);
		void	attack(const std::string& target);
		void	whoAmI();
	
	private:
		std::string	_name;
};

#endif