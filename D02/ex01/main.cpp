# include <iostream>
# include "Fixed.class.hpp"

int main (){
	Fixed a;
	Fixed b(10);
	Fixed c(42.42f);
	Fixed d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << std::endl;
	std::cout << "b is " << std::endl;
	std::cout << "c is " << std::endl;
	std::cout << "d is " << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return (0);
}
