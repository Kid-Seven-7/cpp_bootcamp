#ifndef __ZombieEvent_HPP__
#define __ZombieEvent_HPP__

#include "Zombie.hpp"

class ZombieEvent {
	public:
		//class functions
			void setZombieType(std::string sType);
			Zombie *newZombie(std::string name);
			static void randomChump();
};

#endif
