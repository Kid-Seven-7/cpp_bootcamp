#include "ZombieEvent.hpp"

int main (){
	std::string sCmd;
	std::string sName;
	std::string sType;
	std::string sPhrase;
	bool ran = false;

	while (true) {
		if (ran == false){
			std::cout
			<< "====================\n"
			<< "Plucking some brains\n"
			<< "====================\n";
			ran = true;
		}
		std::cout << "\nType 'EXIT' to close program\n"
		<< "Type 'RANDOM' to create a zombie\n"
		<< "Or enter a name\n\n>";
		std::cin >> sCmd;

		if (sCmd == "EXIT")
			exit(0);
		else if (sCmd == "RANDOM")
			ZombieEvent::randomChump();
		else{
			sName = sCmd;
			std::cout << "Enter type : ";
			std::cin >> sType;
			std::cin.clear();
			std::cin.ignore();
			std::cout << "Enter message ending with a '.': ";
			std::getline(std::cin, sPhrase);

			Zombie::Zombie(sName, sType, sPhrase);
		}

	}
}
