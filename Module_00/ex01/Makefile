NAME = PhoneBook
SRC = PhoneBook.cpp
OBJ = $(SRC:.cpp=.o)

CC = c++
#FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) $(OBJ)

%.o : %.cpp PhoneBook.hpp
	$(CC) $(FLAGS) -c $< -o $@

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re