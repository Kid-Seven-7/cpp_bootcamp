#include "./includes/phonebook.hpp"

bool dateTest(std::string str){
	if(str.size() != 10 || str[2] != '/' || str[5] != '/'){
		printLine(27);
		std::cout << "Invalid entry please retype" << '\n';
		printLine(27);
		return true;
	}
	else
		return false;

}

bool stringTest(std::string str){
	for (int i = 0; i < str.size(); ++i)
	{
		if (isalpha(str[i])){
			return false;
		}
	}
	printLine(27);
	std::cout << "Invalid entry please retype" << '\n';
	printLine(27);
	return true;
}

void addContact(Contact phonebook[8], int Index){

	std::string name;
	std::string surname;
	std::string nickname;
	std::string login;
	std::string postal;
	std::string email;
	std::string address;
	std::string number;
	std::string birthday;
	std::string favoriteMeal;
	std::string underwearColor;
	std::string darkestSecret;

	printLine(26);
	std::cout << "Contact info" << '\n';

	bool isValidString = true;
	bool *ptr = &isValidString;

	do{
		std::cout << "Name : ";
		std::cin >> name;
	}while (stringTest(name));

	do{
		std::cout << "Surname : ";
		std::cin >> surname;
	}while (stringTest(surname));

	do{
		std::cout << "nickname : ";
		std::cin >> nickname;
	}while (stringTest(nickname));

	do{
		std::cout << "login : ";
		std::cin >> login;
	}while (stringTest(login));

	std::cout << "postal : ";
	std::cin >> postal;

	std::cout << "email : ";
	std::cin >> email;

	std::cout << "address : ";
	std::cin >> address;

	std::cout << "number : ";
	std::cin >> number;

	do{
		std::cout << "birthday [DD/MM/YYYY] : ";
		std::cin >> birthday;
	}while (dateTest(birthday));

	std::cout << "favoriteMeal : ";
	std::cin >> favoriteMeal;

	do{
		std::cout << "underwearColor : ";
		std::cin >> underwearColor;
	}while (stringTest(underwearColor));

	std::cout << "darkestSecret : ";
	std::cin >> darkestSecret;



	phonebook[Index].SetAll(Index, name, surname, nickname, login, postal, email,
		address, number, birthday, favoriteMeal, underwearColor, darkestSecret);
	printLine(30);
	std::cout << name << " was added successfully\n";
	printLine(30);
}
