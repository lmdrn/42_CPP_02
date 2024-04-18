/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmedrano <lmedrano@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 13:29:07 by lmedrano          #+#    #+#             */
/*   Updated: 2024/04/12 16:52:58 by lmedrano         ###   ########.fr       */
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
	std::cout << "getRawBits member function called" << std::endl;
	return (this->nbr);
}

void 	Fixed::setRawBits(int const raw)
{
	this->nbr = raw;
}
