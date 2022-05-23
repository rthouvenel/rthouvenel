##
## EPITECH PROJECT, 2021
## MAKEFILE
## File description:
## A makefile that compile cat's files
##
SRC	=	$(wildcard *.c)

NAME	=	the_s

all:
	gcc -o $(NAME) $(SRC) -l csfml-graphics \
	-l csfml-system -l csfml-audio -l csfml-window -g

clean:
	rm -f *.c~ *.h~

fclean:	clean
	rm -f $(NAME)

re:	fclean all
