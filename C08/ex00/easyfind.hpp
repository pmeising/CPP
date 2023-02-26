/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 21:45:17 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/22 23:03:54 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP
# include <iostream>
# include <string>
# include <vector>
# include <deque>
# include <list>
# include <algorithm>
# define DEFAULT "\033[0;39m"
# define B_RED "\033[1;31m"
# define B_BLUE "\033[1;94m"
# define B_YELLOW "\033[1;33m"
# define B_GREEN "\033[1;32m"
# define B_PINK "\033[1;35m"

// https://en.cppreference.com/w/cpp/iterator/iterator
template	<class T>
void	easyfind(T	&container, int tofind)
{
	class T::iterator iter = std::find(container.begin(), container.end(), tofind);
	if (*iter == tofind)
		std::cout << B_GREEN << "Found it!\n" << DEFAULT << std::endl;
	else
		throw std::exception();
}


#endif