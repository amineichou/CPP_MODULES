NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = ScalarConverter.cpp main.cpp
HEADERS = ScalarConverter.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp $(HEADERS)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all