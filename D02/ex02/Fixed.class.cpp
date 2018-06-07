#include "Fixed.class.hpp"

int Fixed::getRawBits()const{
	return (this->nFixedPointValue);}
void Fixed::setRawBits(int const raw){this->nFixedPointValue = raw;}

Fixed::Fixed(){
	std::cout << "Default constuctor called" << std::endl;
	this->nFixedPointValue = 0;
}

Fixed::Fixed(int const nConstIntParam){
	std::cout << "Int constuctor called" << std::endl;
	// this->nFixedPointValue = nConstIntParam;
	setRawBits(nConstIntParam << scnNumOfFractionBits);
}

Fixed::Fixed(float const nConstFloatParam){
	std::cout << "Float constuctor called" << std::endl;
	// this->nFixedPointValue = nConstFloatParam;
	setRawBits(roundf(nConstFloatParam * (1 << scnNumOfFractionBits)));
}

Fixed::Fixed(const Fixed &ogFixedObject){
	std::cout << "Copy constuctor called" << std::endl;
	ptr = new Fixed;
	*ptr = ogFixedObject;
	this->nFixedPointValue = ogFixedObject.nFixedPointValue;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

float Fixed::toFloat()const{
	float ret;

	ret = this->getRawBits();

	return ( ret / (1 << this->scnNumOfFractionBits));
}

int Fixed::toInt()const{
	return (this->getRawBits() >> scnNumOfFractionBits);
}

Fixed & Fixed::operator=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	this->nFixedPointValue = rhs.getRawBits();

	return (*this);
}

bool Fixed::operator>(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue > rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue < rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator>=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue >= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator<=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue <= rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator==(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue == rhs.getRawBits())
		return true;
	else
		return false;
}

bool Fixed::operator!=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	if (this->nFixedPointValue != rhs.getRawBits())
		return true;
	else
		return false;
}

Fixed Fixed::operator+(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';
	Fixed result(void);
	float math;

	math = this->nFixedPointValue + rhs.getRawBits();

	result.setRawBits(math);

	return (result);
}

std::ostream & operator <<(std::ostream & stream, Fixed const & rhs){
	stream << rhs.toFloat();
	return (stream);
}
