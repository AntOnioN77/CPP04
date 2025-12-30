CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
NAME = Polymorphism
SOURCES = Animal.cpp Dog.cpp Cat.cpp main.cpp
WSOURCES = WrongAnimal.cpp WrongCat.cpp WrongDog.cpp Wrongmain.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp
WHEADERS = WrongAnimal.hpp WrongCat.hpp WrongDog.hpp
OBJECTS = $(SOURCES:.cpp=.o)
WOBJECTS = $(WSOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

debug: CFLAGS += -g3
debug: clean all
wrong: $(WSOURCES:.cpp=.o)
	$(CC) $(CFLAGS) -o WrongPolymorphism $^


clean:
	rm -f $(OBJECTS) $(WOBJECTS)

fclean: clean
	rm -f $(NAME) WrongPolymorphism

re: fclean all

.PHONY: all clean fclean re debug