/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 22:03:22 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/01 22:26:27 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << B_GREEN << "DiamondTrap: Default constructor called.\n";
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->FragTrap::setAttackDamage(FragTrap::getAttackDamage());
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << B_GREEN << "DiamondTrap: Param constructor called.\n";
	this->FragTrap::setHitPoints(FragTrap::getHitPoints());
	this->ScavTrap::setEnergyPoints(ScavTrap::getEnergyPoints());
	this->FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	this->ScavTrap::setName(name);
}

// Same thing here we need to call    !! both !!   Copy constructors of the base classes for this to work.
DiamondTrap::DiamondTrap(const DiamondTrap& object) : FragTrap(object), ScavTrap(object)
{
	std::cout << B_GREEN << "DiamondTrap: Copy constructor called.\n";
	this->ScavTrap::setAttackDamage(object.ScavTrap::getAttackDamage());
	this->ScavTrap::setEnergyPoints(object.ScavTrap::getEnergyPoints());
	this->ScavTrap::setHitPoints(object.ScavTrap::getHitPoints());
	this->ScavTrap::setName(object.ScavTrap::getName());
}

DiamondTrap::~DiamondTrap()
{
	std::cout << B_RED << "DiamondTrap: Default destructor called.\n";
}

// #################### Operator overloads #################################

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& rhs)
{
	std::cout << B_GREEN << "FragTrap: Assignment operator overload called.\n";
	this->ScavTrap::setAttackDamage(rhs.ScavTrap::getAttackDamage());
	this->ScavTrap::setEnergyPoints(rhs.ScavTrap::getEnergyPoints());
	this->ScavTrap::setHitPoints(rhs.ScavTrap::getHitPoints());
	this->ScavTrap::setName(rhs.ScavTrap::getName());
	return (*this);
}

void	DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "DiamondTrap: My name is: " << this->ScavTrap::getName() << " my ClapTrap name however is: \n";
}
