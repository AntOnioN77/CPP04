CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = Polymorphism
SOURCES = Animal.cpp Dog.cpp Cat.cpp main.cpp
HEADERS = Animal.hpp Dog.hpp Cat.hpp
OBJECTS = $(SOURCES:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<

debug: CFLAGS += -g3
debug: clean all

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug