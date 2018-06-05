#include "./includes/phonebook.hpp"

void Contact::SetAll(int index,
		std::string name,
		std::string surname,
		std::string nickname,
		std::string login,
		std::string postal,
		std::string email,
		std::string address,
		std::string number,
		std::string birthday,
		std::string favoriteMeal,
		std::string underwearColor,
		std::string darkestSecret){
	this->index = Index;
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
	this->index = Index;
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
	this->index = Index;
	this->name = "name";
	this->surname = "surname";
	this->nickname = "nickname";
	this->login = "login";
	this->postal = "postal";
	this->email = "email";
	this->address = "address";
	this->number = "number";
	this->birthday = "birthday";
	this->favoriteMeal = "favoriteMeal";
	this->underwearColor = "underwearColor";
  this->darkestSecret = "darkestSecret";
}

void Contact::ToString(){
	std::cout << 	"Index :   " << std::setw(10) << this -> index << " | " <<
								"Name :    " << std::setw(10) << this -> name << " | " <<
							 	"Surname : " << std::setw(10) << this -> surname << " | " <<
								"Surname : " << std::setw(10) << this -> surname <<'\n';
}
