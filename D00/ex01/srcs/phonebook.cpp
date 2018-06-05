#include "./includes/phonebook.hpp"


void Contact::SetAll(int index, std::string name, std::string surname,
		std::string nickname, std::string login, std::string postal,
		std::string email, std::string address, std::string number,
		std::string birthday, std::string favoriteMeal, std::string underwearColor,
		std::string darkestSecret){
	this->index = index;
	this->name = name;
	this->surname = surname;
	this->nickname = nickname;
	this->login = login;
	this->postal = postal;
	this->email = email;
	this->address = address;
	this->number = number;
	this->birthday = birthday;
	this->favoriteMeal = favoriteMeal;
	this->underwearColor = underwearColor;
  this->darkestSecret = darkestSecret;
}

Contact::Contact(int index, std::string name, std::string surname,
		std::string nickname, std::string login, std::string postal,
		std::string email, std::string address, std::string number,
		std::string birthday, std::string favoriteMeal, std::string underwearColor,
		std::string darkestSecret){
	this->index = index;
	this->name = name;
	this->surname = surname;
	this->nickname = nickname;
	this->login = login;
	this->postal = postal;
	this->email = email;
	this->address = address;
	this->number = number;
	this->birthday = birthday;
	this->favoriteMeal = favoriteMeal;
	this->underwearColor = underwearColor;
  this->darkestSecret = darkestSecret;
}

Contact::Contact(){
	this->index = 0;
	this->name = "";
	this->surname = "";
	this->nickname = "";
	this->login = "";
	this->postal = "";
	this->email = "";
	this->address = "";
	this->number = "";
	this->birthday = "";
	this->favoriteMeal = "";
	this->underwearColor = "";
  this->darkestSecret = "";
}

void remString(std::string longString, int index){
	if (index == 0)
		std::cout << "Name :            ";
	else if (index == 1)
		std::cout << "Surname :         ";
	else if (index == 2)
		std::cout << "Nickname :        ";
	for (int i = 0; i < 9; ++i)
		std::cout << longString[i];
	std::cout << "." <<'\n';

}

void Contact::ToString(){
	std::string temp;
	int row = 0;

	std::cout<<"Index :           "<< std::setw(10) << this -> index << '\n';

	temp = this -> name;
	if (temp.size() < 9)
	std::cout<<"Name :            "<< std::setw(10) << this -> name << '\n';
	else{
		remString(temp, row);
	}
	row++;
	temp = this -> surname;
	if (temp.size() < 9)
	std::cout<<"Surname :         "<< std::setw(10) << this -> surname << '\n';
	else{
		remString(temp, row);
	}
	row++;
	temp = this -> nickname;
	if (temp.size() < 9)
	std::cout<<"Nickname :        "<< std::setw(10) << this -> nickname << '\n';
	else{
		remString(temp, row);
	}
	row++;
}
