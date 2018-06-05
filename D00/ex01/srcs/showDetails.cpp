#include "./includes/phonebook.hpp"

void cutstring(std::string longString, int index){
	if (index == 0)
		std::cout << "Name :            ";
	else if (index == 1)
		std::cout << "Surname :         ";
	else if (index == 2)
		std::cout << "Nickname :        ";
	else if (index == 3)
		std::cout << "Login :           ";
	else if (index == 4)
		std::cout << "Postal :          ";
	else if (index == 5)
		std::cout << "Email :           ";
	else if (index == 6)
		std::cout << "Postal Address :  ";
	else if (index == 7)
		std::cout << "Birthday :        ";
	else if (index == 8)
		std::cout << "Favorite Meal :   ";
	else if (index == 9)
		std::cout << "Underwear Color : ";
	else if (index == 9)
		std::cout << "Darkest Secret :  ";
	for (int i = 0; i < 9; ++i)
		std::cout << longString[i];
	std::cout << "." <<'\n';
}

void showDetails(Contact entry){
	std::string temp;
	int row = 0;

	printLine(50);

	temp = entry.GetName();
	if (temp.size() < 9)
	std::cout<<"Name :            "<< std::setw(10) << entry.GetName() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;
	temp = entry.GetSurname();
	if (temp.size() < 9)
	std::cout<<"Surname :         "<< std::setw(10) << entry.GetSurname() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;
	temp = entry.GetNickname();
	if (temp.size() < 9)
	std::cout<<"Nickname :        "<< std::setw(10) << entry.GetNickname() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;
	temp = entry.GetLogin();
	if (temp.size() < 9)
	std::cout<<"Login :           "<< std::setw(10) << entry.GetLogin() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetPostal();
	if (temp.size() < 9)
	std::cout<<"Postal :          "<< std::setw(10) << entry.GetPostal() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetEmail();
	if (temp.size() < 9)
	std::cout<<"Email :           "<< std::setw(10) << entry.GetEmail() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetAddress();
	if (temp.size() < 9)
	std::cout<<"Postal Address :  "<< std::setw(10) << entry.GetAddress() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetBirthday();
	if (temp.size() < 9)
	std::cout<<"Birthday :        "<< std::setw(10) << entry.GetBirthday() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetMeal();
	if (temp.size() < 9)
	std::cout<<"Favorite Meal :   "<< std::setw(10) << entry.GetMeal() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetColor();
	if (temp.size() < 9)
	std::cout<<"Underwear Color : "<< std::setw(10) << entry.GetColor() << '\n';
	else{
		cutstring(temp, row);
	}
	row++;

	temp = entry.GetSecret();
	if (temp.size() < 9)
	std::cout<<"Darkest Secret :  "<< std::setw(10) << entry.GetSecret() << '\n';
	else{
		cutstring(temp, row);
	}
		printLine(50);
}
