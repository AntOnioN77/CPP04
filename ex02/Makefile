CC = c++
CFLAGS = -Wall -Wextra -Werror -MMD -MP -std=c++98
NAME = AnimalsWithBrains
SOURCES = AAnimal.cpp Dog.cpp Cat.cpp Brain.cpp main.cpp
HEADERS = AAnimal.hpp Dog.hpp Cat.hpp Brain.hpp
OBJECTS = $(SOURCES:.cpp=.o)
DEPS = $(OBJECTS:.o=.d)

all: $(NAME)

$(NAME): $(OBJECTS)
	$(CC) $(CFLAGS) -o $@ $(OBJECTS)
%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $<
-include $(DEPS)
debug: CFLAGS += -g3
debug: clean all


clean:
	rm -f $(OBJECTS) $(DEPS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re debug