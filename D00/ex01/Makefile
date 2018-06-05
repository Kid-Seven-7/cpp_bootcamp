NAME = myPhonebook

SRC = $(SRCPATH)phonebook.cpp\
			$(SRCPATH)printLine.cpp\
			$(SRCPATH)closeProg.cpp\
			$(SRCPATH)showDetails.cpp\
			$(SRCPATH)addContact.cpp\
			$(SRCPATH)commCenter.cpp\
			$(SRCPATH)main.cpp

SRCO = 	phonebook.o\
				printLine.o\
				closeProg.o\
				showDetails.o\
				addContact.o\
				commCenter.o\
				main.o

COMP = clang++

SRCPATH = srcs/

OBJPATH = objs/

CPPFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	@echo "\033[0;32mcompiling $(NAME)\033[0m"
	@$(COMP) -c $(SRC)
	@$(COMP) -o $(NAME) $(SRCO)

clean:
	@echo "\033[0;31mRemoving object files\033[0m"
	@rm -f $(SRCO)

fclean: clean
	@echo "\033[0;31mRemoving $(NAME)\033[0m"
	@rm -f $(NAME)

re: fclean all
