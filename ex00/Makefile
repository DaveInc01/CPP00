NAME = megaphone

SRC = megaphone.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(STD) $(OBJ) -o $@

fclean:
	$(RM) $(OBJ) $(NAME)

clean:
	$(RM) $(NAME)

re:	fclean all

.PHONY: all clean fclean re