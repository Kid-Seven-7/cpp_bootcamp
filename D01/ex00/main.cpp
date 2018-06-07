#include "pony.hpp"

void createObject(char type){
	std::string name;
	std::string breed;
	double weight;
	double height;

	std::cout << "Pony information" << '\n';
	std::cout << "Name : ";
	std::cin >> name;
	std::cout << "Breed : ";
	std::cin >> breed;
	std::cout << "Weight : ";
	std::cin >> weight;
	std::cout << "Height : ";
	std::cin >> height;

	if (type == 'H' || type == 'h'){
		 PonyOnTheHeap(name,
			breed,
			weight,
			height);
	}
	else{
		PonyOnTheStack(name,
			breed,
			weight,
			height);
	}

}

void invalidEntry(){
	std::cout << "That is not a valid entry" << '\n';
	std::cin.clear();
	std::cin.ignore();
}

void userPrompt(){
	char type;

	std::cout << "Please type 'H' or 'S' : ";
	std::cin >> type;
	if(std::cin.fail()){
		invalidEntry();
		userPrompt();
	}
	else{
		if (type == 'H' || type == 'h' || type == 'S' || type == 's')
			createObject(type);
		else
			invalidEntry();
	}
}

int main (){
	std::cout << "Would you like a pony on the heap or stack?" << '\n';
	userPrompt();
}
