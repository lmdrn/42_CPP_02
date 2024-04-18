/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:09:31 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/18 17:14:53 by lmedrano         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
: nbr(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy)
: nbr(copy.nbr)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(int const nbr)
: nbr(nbr << Fixed::fractionBits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(float const nbr)
: nbr(roundf(nbr * (1 << Fixed::fractionBits)))
{
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &copy)
	{
		this->nbr = copy.getRawBits();
	}
	return *this;
}

int 	Fixed::getRawBits() const
{
	return (this->nbr);
}

void 	Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}

int 	Fixed::toInt(void) const
{
	return (nbr >> Fixed::fractionBits);
}

float Fixed::toFloat(void) const
{
	return ((float)nbr / (1 << Fixed::fractionBits));
}

std::ostream& operator<<(std::ostream &os, Fixed const &f)
{
	os << f.toFloat();
	return (os);
}
