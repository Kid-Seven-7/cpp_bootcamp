NAME = brains

SRC = Zombie.cpp ZombieEvent.cpp main.cpp

SRCO = Zombie.o ZombieEvent.o main.o

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
