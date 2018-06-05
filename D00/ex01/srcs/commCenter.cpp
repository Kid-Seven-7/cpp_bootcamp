#include "./includes/phonebook.hpp"

void commCenter(){
	std::string sCmd;
	Contact phonebook[8];
	int Index = 0;

	printLine(23);
	std::cout << "My 80's style Phonebook" << '\n';
	printLine(23);
	while (true){
		std::cout << "Please enter a command : ";
		std::cin >> sCmd;

		if (sCmd == "EXIT"){
			closeProg();
			break;
		}
		else if (sCmd == "ADD"){
			if (Index < 8){
				addContact(phonebook, Index);
				Index++;
			}
			else
				std::cout << "Your phonebook is full" << '\n';
		}
		else if (sCmd == "SEARCH"){
			if (Index == 0){
				printLine(22);
				std::cout << "No contacts to display" << '\n';
				printLine(22);
			}
			else{
				std::cout << "Number of contacts " << Index << '\n';
				for (int i = 0; i < Index; ++i){
					printLine(100);
					phonebook[i].ToString();
					printLine(100);
				}
			}
			int select;

			std::cout << "Please select an index \nor type '42' a return : ";
			std::cin >> select;
			if (std::cin.fail()){
				std::cout << "That is not a valid index number" << '\n';
				std::cin.clear();
				std::cin.ignore();
				commCenter();
			}
			if (select != 42){
				if(select < Index)
					showDetails(phonebook[select]);
			}
			continue;
		}
	}
}
