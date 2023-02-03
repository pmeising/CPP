/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:43:16 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/03 22:43:34 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	const	Animal	*Carl = new Animal();
	Cat		*Kitty = new Cat();
	Cat		*Birdie = new Cat();
	// This shows, that the Brain constructor is not called when an Animal instance (i.e. Carl) is instanciated.

	// Carl->makeSound();
	Kitty->makeSound();
	// delete Birdie;
	// At this point this creates a shallow copy.
	Birdie->makeSound();
	
	Birdie->haveThought("dot on wall, must resist jump.");
	Birdie->voiceThought(0);
	// delete Kitty;
	*Kitty = *Birdie;
	
	Kitty->voiceThought(0);

	Birdie->haveThought("I attack dot");
	Birdie->voiceThought(1);

	Kitty->voiceThought(1);
	
	// Birdie->voiceThought(10);
	// Birdie->voiceThought(37);
	// Birdie->voiceThought(99);

	
	delete Carl;
	delete Kitty;
	delete Birdie;

	std::cout << "\n\n~~~~~~~~~~~~~~~~~~~~~ Extra tests ~~~~~~~~~~~~~~~~~~~~~~~~~~\n Should be about deep copies and shallow copies.\n\n";
	
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	
	delete j;//should not create a leak
	delete i;
	
	return 0;
}
