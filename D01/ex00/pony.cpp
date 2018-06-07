#include "pony.hpp"

//getters
	std::string Pony::GetName(){return (this-> name);}
	std::string Pony::GetBreed(){return (this-> breed);}
	double Pony::GetWeight(){return (this-> weight);}
	double Pony::GetHeight(){return (this-> height);}
//setters
	void Pony::SetName(std::string sName){this->name = sName;}
	void Pony::SetBreed(std::string sBreed){this->breed = sBreed;}
	void Pony::SetWeight(double dWeight){this->weight = dWeight;}
	void Pony::SetHeight(double dHeight){this->height = dHeight;}

Pony::Pony(){
	this->name = "";
	this->breed = "";
	this->weight = 0;
	this->height = 0;
	Pony::NumOfPonies++;
}

Pony::Pony(std::string name, std::string breed, double weight, double height){
	this->name = name;
	this->breed = breed;
	this->weight = weight;
	this->height = height;
	Pony::NumOfPonies++;
}

void Pony::SetAll(std::string name, std::string breed, double weight, double height){
	this->name = name;
	this->breed = breed;
	this->weight = weight;
	this->height = height;
	Pony::NumOfPonies++;
}

Pony::~Pony(){
	std::cout << this->name <<
					" was destroyed\n:(\n";
	Pony::NumOfPonies--;
}

void Pony::ToString(){
	std::cout << this->name
		<< " is a "
		<< this->breed
		<< " and weighs "
		<< this->weight
		<< " KGs and is "
		<< this->height
		<< " CMs tall"
		<< std::endl;

	std::cout << this->name
		<< " was attacked by a zombie and after a long battle\n";
}

void PonyOnTheStack(std::string name, std::string breed, double weight,
double height){
	Pony stack;

	stack.SetAll(name, breed, weight, height);
	std::cout << "name was added to the stack" << '\n';
	stack.ToString();

}

void PonyOnTheHeap(std::string name,	std::string breed, double weight,
double height){
	Pony *heap;

	heap = new Pony(name, breed, weight, height);
	std::cout << "name was added to the heap" << '\n';
	heap->ToString();

	delete heap;
}
