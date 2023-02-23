/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/23 20:39:43 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/23 20:55:23 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void	push(int &i)
{
	push(i);
}

int main()
{
	std::stack<int>	stack;
	stack.push(1);
	std::cout << "Stack value: " << stack.top() << "\n";
	stack.push(2);
	std::cout << "Stack value: " << stack.top() << "\n";
	stack.push(1);
	std::cout << "Stack value: " << stack.top() << "\n";
	stack.pop();
	std::cout << "Stack value: " << stack.top() << "\n";
	return (0);
}
