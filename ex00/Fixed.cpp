#include "Fixed.hpp"

Fixed::Fixed () {
	std::cout << "Default constructor called" << std::endl;
	fixed = 0;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		fixed = other.getRawBits();
	}
	return *this;
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << "getRawBits member function called" << std::endl;
	return fixed;
}

void Fixed::setRawBits(int const raw) {
	fixed = raw;
}