/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 16:43:16 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/03 22:19:16 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
	// can't instantiate aAnimal object: 
	// const	aAnimal	Carl;
	const	Cat		*Kitty = new Cat();
	const	Cat		*Birdie = new Cat();
	// This shows, that the Brain constructor is not called when an aAnimal instance (i.e. Carl) is instanciated.

	// Carl->makeSound();
	Kitty->makeSound();
	// Birdie = Kitty;
	// At this point this creates a shallow copy.
	Birdie->makeSound();
	
	for (int i = 0; i < 100; i++)
	{
		if (i % 3)
			Birdie->haveThought("This bird looks tasty...");
		else if (i % 4)
			Birdie->haveThought("Dot on the wall!!!");
		else
			Birdie->haveThought("Glass go break if I go push...");
	}
	Birdie->voiceThought(0);
	Birdie->voiceThought(10);
	Birdie->voiceThought(37);
	Birdie->voiceThought(99);

	
	// delete Carl;
	delete Kitty;
	delete Birdie;

	std::cout << "\n\n~~~~~~~~~~~~~~~~~~~~~ Extra tests ~~~~~~~~~~~~~~~~~~~~~~~~~~\n Should be about deep copies and shallow copies.\n\n";
	
	Dog	Scooby;
	
	std::cout << "\n ~~~~ Filling in the ideas array of Scoobys Brain. ~~~~~\n";

	Scooby.haveThought("Ughhhh a cat...");

	std::cout << B_GREEN << "Scoobys thought index 0\n" << DEFAULT;
	Scooby.voiceThought(0);
	Scooby.voiceThought(1);

	std::cout << B_GREEN << "Making a deepcopy of Scooby called Pluto! ~~~~~ \n" << DEFAULT;
		
	Dog	Pluto = Scooby;
	// This one now is a deep copy. It uses both the copy constructor 
	// of the Dog Class as well as the assignment operator overload of
	// the Brain class.

	std::cout << B_GREEN << "Let's see if Pluto thinks the same. No thought on position 1: \n" << DEFAULT;

	Pluto.voiceThought(0);
	Pluto.voiceThought(1);
	
	std::cout << B_GREEN << "Inserting new thought into Scoobys Brain~~~~~\n" << DEFAULT;	
	
	Scooby.haveThought("I like Pluto");

	std::cout << B_GREEN << "What's he thinking?\n" << DEFAULT;
	
	Scooby.voiceThought(1);

	std::cout << B_GREEN << "And Plutos thoughts?\n" << DEFAULT;

	Pluto.voiceThought(1);
	
	return 0;
}
