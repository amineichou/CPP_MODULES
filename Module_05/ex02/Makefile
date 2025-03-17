NAME = bureaucrat

SRC = main.cpp Bureaucrat.cpp AForm.cpp
HEADERS = Bureaucrat.hpp AForm.hpp
OBJ = $(SRC:.cpp=.o)

COMPILER = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

all: $(NAME)

$(NAME): $(OBJ)
	$(COMPILER) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADERS)
	$(COMPILER) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean