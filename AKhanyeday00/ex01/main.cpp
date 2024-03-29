/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhanye <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 17:50:24 by akhanye           #+#    #+#             */
/*   Updated: 2018/06/05 17:51:41 by akhanye          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"

bool	isDigits(std::string str) {
	int	i;
	int	sz;

	sz = str.size();
	if (sz < 1) {
		return (false);
	}
	i = -1;
	while (++i < sz) {
		if (!std::isdigit(str[i]))
			return (false);
	}
	return (true);
}

void	viewAllContacts(Phonebook phonebook[]) {
	int			i;
	int			index;
	std::string	num;

	if (Phonebook::getCounter() == 0) {
		std::cout << "No contact to view" << std::endl;
		return;
	}
	i = -1;
	std::cout << "CONTACTS" << std::endl;
	while (++i < Phonebook::getCounter()) {
		phonebook[i].viewContact(i);
	}
	std::cout << "INDEX TO VIEW : ";
	std::cin >> num;
	if (!isDigits(num)) {
		std::cout << "INVALID CHOICE (PLEASE TRY AGAIN)" << std::endl;
		viewAllContacts(phonebook);
		return ;
	}
	index = std::stoi(num);
	if (index > 7) {
		std::cout << "INVALID CHOICE (PLEASE TRY AGAIN)" << std::endl;
		viewAllContacts(phonebook);
		return ;
	}
	phonebook[index].showDetails();
}

void	runCommands(Phonebook phonebook[]) {
	std::string command;
	
	std::cout << "command> ";
	std::cin >> command;
	while (command.compare("EXIT") != 0) {
		if (command.compare("ADD") == 0)
			phonebook[Phonebook::getCounter()].addContact();
		else if (command.compare("SEARCH") == 0)
			viewAllContacts(phonebook);
		std::cout << "command> ";
		std::cin >> command;
	}
}

int		main(void) {
	Phonebook	phonebook[MAX_CONTACTS];
	runCommands(phonebook);
	return (0);
}
