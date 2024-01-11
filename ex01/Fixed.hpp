#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed(void);
	Fixed(int int_num);
	Fixed(const float floating_point_num);
	Fixed(const Fixed& other);
	Fixed& operator=(const Fixed& other);
	~Fixed();
	float toFloat(void) const;
	int toInt(void) const;
private:
	int num;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif