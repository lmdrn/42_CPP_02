/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:13 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 17:23:23 by lmedrano         ###   ########.fr       */
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
		float 	toFloat(void) const;
		int 	toInt(void) const;
		// surcharge des operators de comparaison
		bool 	operator>(const Fixed& copy);
		bool 	operator<(const Fixed& copy);
		bool 	operator>=(const Fixed& copy);
		bool 	operator<=(const Fixed& copy);
		bool 	operator==(const Fixed& copy);
		bool 	operator!=(const Fixed& copy);
		// surcharge des operators arithmetiques
		Fixed 	operator+(const Fixed& copy);
		Fixed 	operator-(const Fixed& copy);
		Fixed 	operator*(const Fixed& copy);
		Fixed 	operator/(const Fixed& copy);
		// surcharge des operators incr & decr
		Fixed 	operator++(void);
		Fixed 	operator++(int);
		Fixed 	operator--(void);
		Fixed 	operator--(int);
		// Fcts static members min/max
		static 	Fixed min(Fixed& a, Fixed& b);
		static 	Fixed min(const Fixed& a, const Fixed& b);
		static 	Fixed max(Fixed& a, Fixed& b);
		static 	Fixed max(const Fixed& a, const Fixed& b);

};

std::ostream& operator<<(std::ostream &os, Fixed const &f);

#endif
