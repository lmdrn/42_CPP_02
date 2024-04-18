/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:13 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 16:19:18 by lmedrano         ###   ########.fr       */
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
		//constructeur par copie
		Fixed(const Fixed& copy);
		//destructeur
		~Fixed();
		//operateur d'affection
		Fixed& operator=(const Fixed& copy);
		int 	getRawBits(void) const;
		void 	setRawBits(int const raw);
};

#endif
