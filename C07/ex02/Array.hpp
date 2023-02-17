/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:07:50 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 13:23:50 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
// # include "string"
# include <iostream>
# include <stdlib.h>

template	<class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array& obj);
		~Array();
		
		Array& operator=(const Array& rhs);
		T&	operator[](unsigned int i);
		unsigned int	size();

	private:
		T	*array;
};

#endif