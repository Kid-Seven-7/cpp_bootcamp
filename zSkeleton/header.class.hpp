#ifndef __HEADERNAME_HPP__
#define __HEADERNAME_HPP__

class class_name {
	private:
		/* Variable types
			std::string;
			int;
			double;
			float;
			bool;
		*/
		//for copy constuctor
		class_name *ptr;

	public:
		//static variables
			int NumOf;

		/* Return types
			std::string;
			int;
			double;
			float;
			bool;
		*/

		//getters
			[some_return_type] Get();
			/* Implementation
				std::string Get(){return (this-> [some_variable]);}
			*/

		//setters
			void Set();
			/* Implementation
				void Set(){this->[some_variable] = [some_variable];}
			*/

		//constructor(s)
			//default
			class_name();
			/* Implementation
				class_name::class_name(){
					std::cout << "Default constuctor called" << std::endl;
					this->[some_variable] = [some_other_variable]
					class_name::NumOf++;
				}
			*/

			//copy
			class_name(const class_name &[some_variable_name]);
			/* Implementation
				class_name::class_name(const class_name [some_variable_name]){
					std::cout << "Copy constuctor called" << std::endl;
					ptr = new class_name;
					*ptr = *[some_variable_name].ptr
					this->[some_variable] = [some_other_variable]
					class_name::NumOf++;
				}
			*/

			//simple
			class_name([some_variable]...);
			/* Implementation
				class_name::class_name([some_variable]...){
					std::cout << "A simple constuctor called" << std::endl;
					this->[some_variable] = [some_other_variable]
					class_name::NumOf++;
				}
			*/
		//destructor
			~class_name();
			/* Implementation
				class_name::~class_name(){
					std::cout << "Destructor called\n";
				}
			*/

		//Member functions
			void SetAll([some_variable]...);
			/* Implementation
				void class_name::SetAll([some_variable]...){
					this->[some_variable] = [some_other_variable]
					class_name::NumOf++;
				}
			*/

		//Overloads
			//Assign Overload
			class_name & operator=(class_name const & rhs);
			/* Implementation
				class_name & class_name::operator=(const class_name [some_variable1] & rhs){
					std::cout
					<< "Assignment operator called"
					<< '\n';

					this->[some_variable] = rhs.[some_member_function]();

					return (*this);
				}
			*/

			//ToString Overload
			void ToString(); //Handy override for displaying info
			/* Implementation
				void class_name::ToString(){
					std::cout << "some_message : " << some_variable << std::endl;
				}
			*/

		//Static functions
			int GetNumOf();
			/* Implementation
				int GetNumOf(){return (NumOf);}
			*/

};

#endif
