/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 09:55:04 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 19:17:52 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_H
#define ITER_H
# include "iostream"
#include <cstdlib>

template	<class T>
void	iter(T *ptr, unsigned int len, void(*f)(T))
{
	unsigned int	i = 0;

	while (i < len)
	{
		f(ptr[i]);
		i++;
	}
}

template <class T>
void	printing(T a)
{
	std::cout << a << "\n";
}

#endif