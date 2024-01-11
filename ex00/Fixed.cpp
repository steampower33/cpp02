#include "Fixed.hpp"

Fixed::Fixed ( void ) {
	std::cout << "Default constructor called" << std::endl;
	fixed = 0;
}

Fixed& Fixed::operator= ( const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		fixed = other.getRawBits();
	}
	return *this;
}

Fixed::Fixed( const Fixed& other ) {
	std::cout << "Copy constructor called" << std::endl;
	fixed = other.fixed;
	*this = other;
}

Fixed::~Fixed ( void ) {
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}

void Fixed::setRawBits( int const raw) {
	fixed = raw;
}