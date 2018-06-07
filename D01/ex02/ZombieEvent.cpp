#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void setZombieType(std::string sType){
	Zombie("Unknown", sType);
}

Zombie *newZombie(std::string name){
	Zombie *freshZombie;

	freshZombie = new Zombie(name);
	return (freshZombie);
}

void ZombieEvent::randomChump(){
	std::string name;
	std::string type;
	int num = rand() % 10 + 1;

	if (num == 0)
		name = ("Slayer");
	else if (num == 1)
		name = ("Bob the butcher");
	else if (num == 2)
		name = ("Jack the ripper");
	else if (num == 3)
		name = ("Scary Terry");
	else if (num == 4)
		name = ("Anna-Belle");
	else if (num == 5)
		name = ("It");
	else if (num == 6)
		name = ("Jason X");
	else if (num == 7)
		name = ("Freddy Kruger");
	else if (num == 8)
		name = ("Chucky");
	else if (num == 9)
		name = ("Spongebob");
	else
		name = ("Rick Sanchez");

	num = rand() % 10 + 1;

	if (num == 0)
		type = ("ghoul");
	else if (num == 1)
		type = ("walker");
	else if (num == 2)
		type = ("crawler");
	else if (num == 3)
		type = ("tank");
	else if (num == 4)
		type = ("melter");
	else if (num == 5)
		type = ("burster");
	else if (num == 6)
		type = ("spitter");
	else if (num == 7)
		type = ("stalker");
	else if (num == 8)
		type = ("puker");
	else if (num == 9)
		type = ("screamer");
	else
		type = ("bonie");

	Zombie(name, type);
}
