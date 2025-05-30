NAME = convert
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Base.cpp A.cpp B.cpp C.cpp main.cpp
HEADERS = Base.hpp A.hpp B.hpp C.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all