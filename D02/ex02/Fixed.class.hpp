#ifndef __FIXED_CLASS_HPP__
#define __FIXED_CLASS_HPP__

#include <iostream>
#include <cmath>

class Fixed {
	private:
		//for copy constuctor
		Fixed *ptr;

		float nFixedPointValue;
		static const int scnNumOfFractionBits = 8;

	public:
		//getters
			int getRawBits() const;

		//setters
			void setRawBits(int const raw);

		//constructor(s)
			//default
			Fixed();

			//copy
			Fixed(const Fixed &ogFixedObject);

			//simple
			Fixed(int const nConstIntParam);
			Fixed(float const nConstFloatParam);

			//destructor
			~Fixed();

		//Member functions
			float toFloat() const;
			int toInt() const;

		//Overloads
			//Assign Overload
			Fixed & operator=(Fixed const & rhs);

			//Comparisions
			bool operator>(Fixed const & rhs);
			bool operator<(Fixed const & rhs);
			bool operator>=(Fixed const & rhs);
			bool operator<=(Fixed const & rhs);
			bool operator==(Fixed const & rhs);
			bool operator!=(Fixed const & rhs);

			//arithmetic
			Fixed operator+(Fixed const & rhs);
			Fixed operator-(Fixed const & rhs);
			Fixed operator/(Fixed const & rhs);
			Fixed operator*(Fixed const & rhs);

};

std::ostream & operator <<(std::ostream & stream, Fixed const & rhs);

#endif
