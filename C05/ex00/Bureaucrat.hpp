/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmeising <pmeising@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 23:00:58 by pmeising          #+#    #+#             */
/*   Updated: 2023/02/03 23:04:52 by pmeising         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <string>
# include <iostream>

class	Bureaucrat
{
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& rhs);
		~Bureaucrat();
		std::string	getName(void) const;
		unsigned int	getGrade(void) const;

	private:
		const std::string	_name;
		unsigned int		_grade;
};

#endif
