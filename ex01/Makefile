NAME = phonebook

SRC = Contact.cpp Phonebook.cpp utils.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(STD) $(OBJ) -o $@

clean:
	$(RM) $(NAME)

fclean:
	$(RM) $(OBJ) $(NAME)

re:	fclean all

.PHONY: all clean fclean re