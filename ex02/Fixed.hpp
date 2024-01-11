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
	~Fixed();
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int toInt(void) const;
	bool operator>(const Fixed& other) const;
	bool operator<(const Fixed& other) const;
	bool operator>=(const Fixed& other) const;
	bool operator<=(const Fixed& other) const;
	bool operator==(const Fixed& other) const;
	bool operator!=(const Fixed& other) const;
	Fixed operator+(const Fixed& other) const;
	Fixed operator-(const Fixed& other) const;
	Fixed operator*(const Fixed& other) const;
	Fixed operator/(const Fixed& other) const;
	Fixed& operator++();
	Fixed operator++(int);
	Fixed& operator--();
	Fixed operator--(int);
	static Fixed& min(Fixed& f1, Fixed& f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed& f1, Fixed& f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);


private:
	int num;
	static const int fractional_bits = 8;
};

std::ostream& operator<<(std::ostream& os, const Fixed& other);

#endif