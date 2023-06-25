NAME = megaphone

SRC = megaphone.cpp

OBJ=$(SRC:.cpp=.o)

FLAGS = -Wall -Wextra -Werror

STD = -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME) : $(OBJ)
	c++ $(FLAGS) $(STD) $< -o $@

%.o: %.c
	$(FLAGS) $(STD) -c $< -o $@

clean:
	$(RM) $(OBJ) $(NAME)

fclean:
	$(RM) $(NAME)

re:	fclean all