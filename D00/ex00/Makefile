NAME = megaphone

SRC = megaphone.cpp

SRCO = megaphone.o

COMP = clang++

CPPFLAGS = -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):
	$(COMP) -c $(SRC) $(CPPFLAGS)
	$(COMP) -o $(NAME) $(SRCO)

clean:
	rm -f $(SRCO)

fclean: clean
	rm -f $(NAME)

re: fclean all
