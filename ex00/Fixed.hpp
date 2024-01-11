#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed& operator=(const Fixed& other);
	Fixed(const Fixed& other);
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
private:
	int fixed;
	static const int fractional_bits = 8;
};

#endif