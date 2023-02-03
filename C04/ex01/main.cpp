/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:43:16 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/03 15:33:47 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const	Animal	*Carl = new Animal();
	const	Cat		*Kitty = new Cat();
	const	Cat		*Birdie;

	// This shows, that the Brain constructor is not called when an Animal instance (i.e. Carl) is instanciated.

	Carl->makeSound();
	Kitty->makeSound();
	*Birdie = *Kitty;
	Birdie->makeSound();
	delete Carl;
	delete Kitty;
	return 0;
}
