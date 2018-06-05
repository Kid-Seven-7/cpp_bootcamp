#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__
		#include <iomanip>
		#include <iostream>
		#include <cstring>
		#include <cstring>
		#include <locale>

		//Classes
		class Contact{
		private:
			int index;
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

		public:
			static int numOfContacts;
			int GetIndex(){return index;}
	    void Setindex(int index){this->index = index;}

	    std::string GetName(){return name;}
	    void SetName(std::string surname){this->surname = surname;}

			std::string GetSurname(){return surname;}
	    void SetSurname(std::string surname){this->surname = surname;}

			std::string GetNickname(){return nickname;}
	    void SetSurame(std::string nickname){this->nickname = nickname;}

			std::string GetLogin(){return login;}
	    void SetLogin(std::string login){this->login = login;}

			std::string GetPostal(){return postal;}
	    void SetPostal(std::string postal){this->postal = postal;}

			std::string GetEmail(){return email;}
	    void SetEmail(std::string email){this->email = email;}

			std::string GetAddress(){return address;}
	    void SetAddress(std::string address){this->address = address;}

			std::string GetNumber(){return number;}
	    void SetNumber(std::string number){this->number = number;}

			std::string GetBirthday(){return birthday;}
	    void SetBirthday(std::string birthday){this->birthday = birthday;}

			std::string GetMeal(){return favoriteMeal;}
	    void SetMeal(std::string favoriteMeal){this->favoriteMeal = favoriteMeal;}

			std::string GetColor(){return underwearColor;}
	    void SetColor(std::string underwearColor){this->underwearColor = underwearColor;}

			std::string GetSecret(){return darkestSecret;}
	    void SetSecret(std::string darkestSecret){this->darkestSecret = darkestSecret;}

	    void SetAll(int,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string);

	    Contact(int,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string,
				std::string);

	    Contact();

	    static int GetNumOfContacts(){return numOfContacts;}

	    void ToString();
		};

		//Functions
			//Voids
				void printLine(int size);
				void closeProg();
				void showDetails(Contact entry);
				void addContact(Contact phonebook[8], int Index);
				void commCenter();

#endif
