/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:13 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 17:17:01 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

#include <string>
#include <iostream>

class Fixed
{
	private:
		int 			nbr;
		static const int 	fractionBits = 8;
	public:
		//constructeur par default
		Fixed();
		//constructeur avec int en param
		Fixed(int const nbr);
		//constructeur avec float en param
		Fixed(float const nbr);
		//constructeur par copie
		Fixed(const Fixed& copy);
		//destructeur
		~Fixed();
		//operateur d'affection
		Fixed& operator=(const Fixed& copy);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
		int 	toInt(void) const;
		float 	toFloat(void) const;
};

std::ostream& operator<<(std::ostream &os, Fixed const &f);

#endif
