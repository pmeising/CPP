/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 12:39:33 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/03 14:29:45 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << B_GREEN << "Brain: Default constructor called.\n" << DEFAULT;
}

Brain::~Brain()
{
	std::cout << B_GREEN << "Brain: Default destructor called.\n" << DEFAULT;
}

Brain::Brain(const Brain& obj)
{
	std::cout << B_GREEN << "Brain: Copy constructor called. \n" << DEFAULT;
	for (int i = 0; i < 100; i++)
		this->setIdea(obj.getIdea(i), i);
}

Brain&	Brain::operator=(const Brain& rhs)
{
	std::cout << B_GREEN << "Brain: Assignment operator overload called.\n" << DEFAULT;
	for (int i = 0; i < 100; i++)
		this->setIdea(rhs.getIdea(i), i);
	return (*this);
}

// ####################### Member functions ####################################

void	Brain::setIdea(const std::string idea, int i)
{
	this->ideas[i] = idea;
}

std::string Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}
