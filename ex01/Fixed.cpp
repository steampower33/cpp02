#include "Fixed.hpp"

Fixed::Fixed () {
	std::cout << "Default constructor called" << std::endl;
	num = 0;
}

// int num to fixed_point_num
Fixed::Fixed (int int_num) {
	std::cout << "Int constructor called" << std::endl;
	num = int_num << fractional_bits;
}

// floating point num to fixed point num
Fixed::Fixed (const float floating_point_num)
{
	std::cout << "Float constructor called" << std::endl;
	num = roundf(floating_point_num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(const Fixed& other) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &other)
	{
		num = other.getRawBits();
	}
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

// fixed point num to floating point num
float Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

// fixed point num to int
int Fixed::toInt(void) const {
	return num >> fractional_bits;
}

int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return num;
}

void Fixed::setRawBits(int const raw) {
	num = raw;
}

std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return os;
}