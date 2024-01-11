#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;

	Fixed c(5);
	Fixed d(10);
	Fixed e(5);
	if (c < d)
		std::cout << "c < d" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (d > c)
		std::cout << "d > c" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (d >= c)
		std::cout << "d >= c" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (c >= e)
		std::cout << "c >= e" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (c <= d)
		std::cout << "c <= d" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (e <= c)
		std::cout << "e <= c" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (c != d)
		std::cout << "c != d" << std::endl;
	else
		std::cout << "None" << std::endl;
	if (c == e)
		std::cout << "c == e" << std::endl;
	else
		std::cout << "None" << std::endl;
	
	return 0;
}