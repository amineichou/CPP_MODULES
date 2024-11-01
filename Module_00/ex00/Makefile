NAME = megaphone

CC = c++
FLAGS = -Wall -Wextra -Werror


all: $(NAME)

$(NAME): megaphone.cpp
	$(CC) $(FLAGS) -std=c++98 -o $(NAME) megaphone.cpp

clean:
	rm -f $(NAME)

fclean: clean

re: fclean all

.PHONY: all clean fclean re