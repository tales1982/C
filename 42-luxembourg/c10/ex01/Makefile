DIR_INC = inc
DIR_SRCS = srcs
SRCS = $(DIR_SRCS)/ft_putstr.c $(DIR_SRCS)/disp_file.c $(DIR_SRCS)/disp_stdin.c $(DIR_SRCS)/ft_strcmp.c $(DIR_SRCS)/ft_cat.c
LIB = libft.a
LFLAGS = -lft
NAME = ft_cat
OBJS = $(SRCS:.c=.o)
CC = gcc
CFLAGS = -Wall -Werror -Wextra -I$(DIR_INC)
RM = rm -f

all:	$(NAME)

clean: 
	$(RM) $(OBJS)

fclean:	clean
	$(RM) $(LIB)
	$(RM) $(NAME)

re:	fclean all

$(NAME):	$(LIB)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME) -L. $(LFLAGS) 

$(LIB):	$(OBJS)
	ar -rc $(LIB) $(OBJS)
	ranlib $(LIB)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

.PHONY:	all clean fclean re

