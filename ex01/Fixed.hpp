#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int int_num);
	Fixed(const float floating_point_num);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat() const;
	int toInt() const;
private:
	int num;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif