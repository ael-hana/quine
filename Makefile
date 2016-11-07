DIR=TMP/

CC=gcc

CFLAGS=-Wall -Wextra -Werror

RM=rm -rf

SRC=Colleen.c Grace.c Sully.c

NAME1=Colleen

NAME2=Grace

NAME3=Sully

PROJET1=Colleen.c

PROJET2=Grace.c

PROJET3=Sully.c

OBJ1=$(addprefix $(DIR), $(PROJET1:.c=.o))

OBJ2=$(addprefix $(DIR), $(PROJET2:.c=.o))

OBJ3=$(addprefix $(DIR), $(PROJET3:.c=.o))


all: $(NAME1) $(NAME2) $(NAME3)


$(NAME1):
	@mkdir -p $(DIR)
	$(CC) $(CFLAGS) -c $(PROJET1) -o $(OBJ1)
	$(CC) $(CFLAGS) $(OBJ1) -o $(NAME1)

$(NAME2):
	@mkdir -p $(DIR)
	$(CC) $(CFLAGS) -c $(PROJET2) -o $(OBJ2)
	$(CC) $(CFLAGS) $(OBJ2) -o $(NAME2)

$(NAME3):
	@mkdir -p $(DIR)
	$(CC) $(CFLAGS) -c $(PROJET3) -o $(OBJ3)
	$(CC) $(CFLAGS) $(OBJ3) -o $(NAME3)

clean:
	$(RM) $(DIR)

fclean: clean
	$(RM) $(NAME1) $(NAME2) $(NAME3)

re: fclean all

.PHONY: clean fclean
