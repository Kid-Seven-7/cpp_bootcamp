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
	this->nFixedPointValue = nConstIntParam;
}

Fixed::Fixed(float const nConstFloatParam){
	std::cout << "Float constuctor called" << std::endl;
	this->nFixedPointValue = nConstFloatParam;
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
	return (0);
}

int Fixed::toInt()const{
	return (this->getRawBits());
}

Fixed & Fixed::operator=(const Fixed & rhs){
	std::cout
	<< "Assignment operator called"
	<< '\n';

	this->nFixedPointValue = rhs.getRawBits();

	return (*this);
}

// std::ostream & Fixed::operator<<(std::ostream & stream, Fixed const & rhs){
// 	stream << rhs.getRawBits();
// 	return (stream);
// }
