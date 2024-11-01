NAME = Account
CFLAGS = -Wall -Wextra -Werror
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
COMPILER = c++

all : $(NAME)


$(NAME) : $(OBJS)
	$(COMPILER) $(CFLAGS) -o $(NAME) $(OBJS)

%.o : %.cpp
	$(COMPILER) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean

re : fclean all

.PHONY : all clean fclean re