#include "Fixed.class.hpp"

int main (){
	int aInt;
	int bInt;
	std::cout << "enter val for aInt" << '\n';
	std::cin >> aInt;
	std::cout << "enter val for bInt" << '\n';
	std::cin >> bInt;
	Fixed b(bInt);
	Fixed a(aInt);

	std::cout << "aInt is " <<aInt<< " bInt is " <<bInt<< '\n';

	if (aInt > bInt)
		std::cout << "a is bigger" << '\n';
	else if (aInt < bInt)
		std::cout << "b is bigger" << '\n';

	if (aInt < bInt)
		std::cout << "a is not bigger" << '\n';
	else if (aInt > bInt)
		std::cout << "b is not bigger" << '\n';

	if (aInt == bInt)
		std::cout << "a is equals to b" << '\n';
	else if (aInt != bInt)
		std::cout << "a is not equals to b" << '\n';

		std::cout << "a + b is " << a+b << '\n';

	return 0;
}
