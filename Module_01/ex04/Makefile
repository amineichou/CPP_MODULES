NAME = main

SRCS = main.cpp replaceStr.cpp
OBJS = $(SRCS:.cpp=.o)

COMPILER = c++ -std=c++98
FLAGS = -fsanitize=address -g #-Wall -Wextra -Werror 

all: $(NAME)

$(NAME): $(OBJS)
	$(COMPILER) $(FLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp main.hpp
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
