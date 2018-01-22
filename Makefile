
NAME = lem-in

CC = gcc

FLAGS = -Wall -Werror -Wextra

FILES = main.c 

INC = -I.

RM = rm -Rf

$(NAME):
	$(CC) $(FLAGS) $(FILES) $(INC) $(FILES)

all: $(NAME)

clean:

fclean:
	$(RM) $(NAME)

re: all fclean