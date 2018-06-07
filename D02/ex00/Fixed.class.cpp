#include "Fixed.class.hpp"

int Fixed::getRawBits(){return (this->nFixedPointValue);}
void Fixed::setRawBits(int const raw){this->nFixedPointValue = raw;}

Fixed::Fixed(){
	std::cout << "Default constuctor called" << std::endl;
	this->nFixedPointValue = 0;
}

Fixed::Fixed(const Fixed &ogFixedObject){
	std::cout << "Copy constuctor called" << std::endl;
	ptr = new Fixed;
	*ptr = *ogFixedObject.ptr;
	this->nFixedPointValue = ogFixedObject.nFixedPointValue;
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed & Fixed::operator=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called from "
	<< this->nFixedPointValue;
	std::cout
	<< " and "
	<< rhs.getRawBits()
	<< '\n';

	this->nFixedPointValue = rhs.getRawBits();

	return (*this);
}
