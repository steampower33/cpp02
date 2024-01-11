#include "Fixed.hpp"

Fixed::Fixed (void) {
	num = 0;
}

// int num to fixed_point_num
Fixed::Fixed (int int_num) {
	num = int_num << fractional_bits;
}

// floating point num to fixed point num
Fixed::Fixed (const float floating_point_num)
{
	num = roundf(floating_point_num * (1 << fractional_bits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed::~Fixed() {
}

// fixed point num to floating point num
float Fixed::toFloat(void) const {
	return static_cast<float>(this->getRawBits()) / (1 << fractional_bits);
}

// fixed point num to int
int Fixed::toInt(void) const {
	return num >> fractional_bits;
}

// getter
int Fixed::getRawBits() const {
	// std::cout << "getRawBits member function called" << std::endl;
	return num;
}

// setter
void Fixed::setRawBits(int const raw) {
	num = raw;
}

// <<
std::ostream& operator<<(std::ostream &os, const Fixed &other)
{
	os << other.toFloat();
	return os;
}

// The 6 comparison operators: >, <, >=, <=, == and !=.
bool Fixed::operator>(const Fixed& other) const {
	return this->getRawBits() > other.getRawBits();
}

bool Fixed::operator<(const Fixed& other) const {
	return this->getRawBits() < other.getRawBits();
}

bool Fixed::operator>=(const Fixed& other) const {
	return this->getRawBits() >= other.getRawBits();
}

bool Fixed::operator<=(const Fixed& other) const {
	return this->getRawBits() <= other.getRawBits();
}

bool Fixed::operator==(const Fixed& other) const {
	return this->getRawBits() == other.getRawBits();
}

bool Fixed::operator!=(const Fixed& other) const {
	return this->getRawBits() != other.getRawBits();
}

// The 4 arithmetic operators: +, -, *, and /.
Fixed Fixed::operator+(const Fixed& other) const {
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed Fixed::operator-(const Fixed& other) const {
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed Fixed::operator*(const Fixed& other) const {
	return Fixed(this->toFloat() * other.toFloat());
}

Fixed Fixed::operator/(const Fixed& other) const {
	return Fixed(this->toFloat() / other.toFloat());
}

// pre-increment and post-increment, pre-decrement and post-decrement
Fixed& Fixed::operator++() {
	num++;
	return *this;
}

Fixed Fixed::operator++(int) {
	Fixed f(*this);
	f.num = this->num++;
	return f;
}

Fixed& Fixed::operator--() {
	num--;
	return *this;
}

Fixed Fixed::operator--(int) {
	Fixed f(*this);
	f.num = this->num--;
	return f;
}

// min, max

Fixed& Fixed::min(Fixed& f1, Fixed& f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

const Fixed& Fixed::min(const Fixed& f1, const Fixed& f2) {
	if (f1.getRawBits() < f2.getRawBits())
		return f1;
	return f2;
}

Fixed& Fixed::max(Fixed& f1, Fixed& f2) {
	if (f1.getRawBits() > f2.getRawBits())
			return f1;
	return f2;
}

const Fixed& Fixed::max(const Fixed& f1, const Fixed& f2) {
	if (f1.getRawBits() > f2.getRawBits())
		return f1;
	return f2;
}