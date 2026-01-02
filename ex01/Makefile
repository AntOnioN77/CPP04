CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
NAME = AnimalsWithBrains
SOURCES = Animal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp
WSOURCES = WrongAnimal.cpp WrongCat.cpp WrongDog.cpp Wrongmain.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp Brain.hpp
WHEADERS = WrongAnimal.hpp WrongCat.hpp WrongDog.hpp
OBJECTS = $(SOURCES:.cpp=.o)
WOBJECTS = $(WSOURCES:.cpp=.o)
DEPS = $(OBJECTS:.o=.d) $(WOBJECTS:.o=.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
-include $(DEPS)
debug: CFLAGS += -g3
debug: clean all
wrong: $(WSOURCES:.cpp=.o)
	$(CC) $(CFLAGS) -o WrongWithBrains $^


clean:
	rm -f $(OBJECTS) $(WOBJECTS) $(DEPS)

fclean: clean
	rm -f $(NAME) WrongWithBrains

re: fclean all

.PHONY: all clean fclean re debug wrong