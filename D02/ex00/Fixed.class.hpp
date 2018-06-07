#ifndef __FIXED_CLASS_HPP__
#define __FIXED_CLASS_HPP__

#include <iostream>

class Fixed {
	private:
		//for copy constuctor
		Fixed *ptr;

		int nFixedPointValue;
		static const int scnNumOfFractionBits = 8;

	public:
		//getters
			int getRawBits();

		//setters
			void setRawBits(int const raw);

		//constructor(s)
			//default
			Fixed();

			//copy
			Fixed(const Fixed &ogFixedObject);

			//destructor
			~Fixed();

		//Member functions

		//Overloads
			//Assign Overload
			Fixed & operator=(Fixed const & rhs);
};

#endif
