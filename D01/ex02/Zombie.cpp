#include "ZombieEvent.hpp"

std::string Zombie::GetName(){return (name);}
void Zombie::SetName(std::string sName){this->name = sName;}
std::string Zombie::GetType(){return (type);}
void Zombie::SetType(std::string sType){this->type = sType;}
std::string Zombie::GetPhrase(){return (phrase);}
void Zombie::SetPhrase(std::string sPhrase){this->phrase = sPhrase;}

Zombie::Zombie(){
	this->name = "some zombie";
	this->type = "ghouls";
	this->phrase = "Brains, I want brains";
}

Zombie::Zombie(std::string sName){
	this->name = sName;
	this->type = "Ghoul";
	this->phrase = "Brains, I want brains";
}

Zombie::Zombie(std::string sName, std::string sType){
	this->name = sName;
	this->type = sType;
	this->phrase = "Brains, I want brains";
}

Zombie::Zombie(std::string sName, std::string sType, std::string sPhrase){
	this->name = sName;
	this->type = sType;
	this->phrase = sPhrase;
}

Zombie::~Zombie(){
	Zombie::ToString();
	std::cout << " was then destroyed by an iZOMBIE\n";

}

void Zombie::SetAll(std::string sName, std::string sType, std::string sPhrase){
	this->name = sName;
	this->type = sType;
	this->phrase = sPhrase;
}

void Zombie::ToString(){
	std::cout
	<< std::endl
	<< this->name
	<< ", a "
	<< this->type
	<< ", entered the room and screeched "
	<< this->phrase
	<< std::endl
	<< this->name
	<< " walked around aimlessly and then ";
}
