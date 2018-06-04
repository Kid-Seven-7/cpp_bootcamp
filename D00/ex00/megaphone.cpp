#include <iostream>
#include <string>
#include <locale>
#include <cctype>

int main(int ac, char **av){
	std::string sMessage;

	if (ac == 1)
		std::cout << "*LOUD AND UNBEARABLE FEEDBACK NOISE*";
	else{
		for (int i = 1; i < ac; ++i){
			for (int j = 0; av[i][j] != '\0'; ++j){
				if ((!isupper(av[i][j])) && isalpha(av[i][j]))
					av[i][j] -= 32;
			}
			std::cout << av[i];
		}
	}
	std::cout << std::endl;

	return (0);
}
