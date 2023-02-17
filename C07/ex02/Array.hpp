/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:07:50 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 17:55:30 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>
# include <cstdlib>
# include <exception>

template	<class T>
class Array
{
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& obj);
		~Array();

		Array& operator=(const Array<T>& rhs);
		T&	operator[](unsigned int i);
		unsigned int	size() const;

	private:
		T	*array;
};

template <class T>
Array<T>::Array() : array(NULL)
{
	std::cout << "Default constructor call.\n";
}

template <class T>
Array<T>::Array(unsigned int n) : array(NULL)
{
	this->array = new T[n]();
	std::cout << "Parameter constructor call.\nArray of size " << n << " created.\n";
}


// Need to initialize the array first, before it can be deleted. :D 
template <class T>
Array<T>::Array(const Array<T>& obj) : array(NULL)
{
	unsigned int	size;
	size = obj.size();

	if (this->array)
		delete[] array;
	this->array = new T[size]();
	for (unsigned int i = 0; i < size; i++)
		this->array[i] = obj.array[i];
}


template <class T>
Array<T>::~Array()
{
	if (this->array)
		delete[] this->array;
	std::cout << "Default destructor call.\n";
}

// ########################## Operator overloads #########################

template <class T>
Array<T>&	Array<T>::operator=(const Array<T>& rhs)
{
	unsigned int	size;
	size = rhs.size();
	std::cout << "Size: " << size << "\n";

	if (this->array)
		delete[] array;
	this->array = new T[size]();
	for (int i = 0; i < size; i++)
		this->array[i] = rhs.array[i];
	return (*this);	
}

template <class T>
T&	Array<T>::operator[](unsigned int i)
{
	try
	{
		return (this->array[i]);
	}
	catch(const std::exception& e)
	{
		std::cout << "Exception thrown: Iterator out of bounds.\n";
	}
}


// ################################# Member functions #########################

template <class T>
unsigned int	Array<T>::size() const
{
	if (this->array)
		return (sizeof(this->array) / sizeof(T));
	return (0);
}

#endif