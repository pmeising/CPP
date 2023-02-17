/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 12:27:26 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/17 17:13:56 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Array.hpp"

// template <class T>
// Array<T>::Array() : array(NULL)
// {
// 	std::cout << "Default constructor call.\n";
// }

// template <class T>
// Array<T>::Array(unsigned int n)
// {
// 	this->array = new T[n]();
// 	std::cout << "Parameter constructor call.\n Array of size " << n << " created.\n";
// }

// template <class T>
// Array<T>::Array(const Array<T>& obj)
// {
// 	unsigned int	size;
// 	size = obj.size();

// 	if (this->array)
// 		delete[] array;
// 	this->array = new T[size]();
// 	for (int i = 0; i < size; i++)
// 		this->array[i] = obj.array[i];
// }


// template <class T>
// Array<T>::~Array()
// {
// 	if (this->array)
// 		delete[] this->array;
// 	std::cout << "Default destructor call.\n";
// }

// // ########################## Operator overloads #########################

// template <class T>
// Array<T>&	Array<T>::operator=(const Array<T>& rhs)
// {
// 	unsigned int	size;
// 	size = rhs.size();

// 	if (this->array)
// 		delete[] array;
// 	this->array = new T[size]();
// 	for (int i = 0; i < size; i++)
// 		this->array[i] = rhs.array[i];
// 	return (*this);	
// }

// template <class T>
// T&	Array<T>::operator[](unsigned int i)
// {
// 	try
// 	{
// 		T	temp;
// 		temp = this->array[i];
// 		return (temp);
// 	}
// 	catch(const std::exception& e)
// 	{
// 		std::cout << "Exception thrown: Iterator out of bounds.\n";
// 	}
// }


// // ################################# Member functions #########################

// template <class T>
// unsigned int	Array<T>::size()
// {
// 	int i = 0;

// 	while (this->array[i])
// 		i++;
// 	return (i);
// }
