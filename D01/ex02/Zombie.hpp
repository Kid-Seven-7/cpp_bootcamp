#ifndef __Zombie_HPP__
#define __Zombie_HPP__

#include <iomanip>
#include <string>
#include <cstdlib>
#include <iostream>

class Zombie {
	private:
		std::string name;
		std::string type;
		std::string phrase;


	public:
		//getters
			std::string GetName();
			std::string GetType();
			std::string GetPhrase();

		//setters
			void SetName(std::string sName);
			void SetType(std::string sType);
			void SetPhrase(std::string sPhrase);

		//constructor(s)
			Zombie();
			Zombie(std::string sName);
			Zombie(std::string sName, std::string sType);
			Zombie(std::string sName, std::string sType, std::string sPhrase);

		//destructor
			~Zombie();

		//class functions
			void announce();
			void SetAll(std::string sName, std::string sType, std::string sPhrase);
			void ToString(); //Handy override for displaying info
};

//Function declararions
	//Voids
	//std::strings
	//ints
	//doubles
	//bools

#endif
