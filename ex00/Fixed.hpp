#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>

class Fixed
{
public:
	Fixed( void );
	Fixed& operator=( const Fixed& other );
	Fixed( const Fixed& other );
	~Fixed( void );
	int getRawBits( void ) const;
	void setRawBits( int const raw );
private:
	int fixed;
	static const int fractional_bits = 8;
};

#endif