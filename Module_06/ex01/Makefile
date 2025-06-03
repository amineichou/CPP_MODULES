NAME = serializer
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Serializer.cpp main.cpp
HEADERS = Serializer.hpp
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