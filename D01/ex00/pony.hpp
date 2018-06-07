#ifndef __PONY_HPP__
#define __PONY_HPP__

	/* Includes
		#include <>
	*/
	#include <iostream>

	class Pony {
		private:
			std::string name;
			std::string breed;
			double weight;
			double height;

		public:
			//static variables
				int NumOfPonies;

			//getters
				std::string GetName();
				std::string GetBreed();
				double GetWeight();
				double GetHeight();

			//setters
				void SetName(std::string sName);
				void SetBreed(std::string sBreed);
				void SetWeight(double dWeight);
				void SetHeight(double dHeight);

			//constructor(s)
				Pony();
				Pony(std::string, std::string, double, double);
			//destructor
				~Pony();

			//class functions
				void SetAll(std::string name,
					std::string breed,
					double weight,
					double height);
				void ToString();

			//Static functions
				int GetNumOfPonies(){return (NumOfPonies);}

	};

	//Function declararions
		//Voids
			void PonyOnTheStack(std::string,
				std::string,
				double,
				double);
			void PonyOnTheHeap(std::string,
				std::string,
				double,
				double);
			void createObject(char type);
		//std::strings
		//ints
		//doubles
		//bools

#endif
