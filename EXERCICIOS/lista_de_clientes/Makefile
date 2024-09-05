SRC = ft_print_menu.c \
      ft_strcmp.c \
      ft_strcpy.c \
	  apagarCliente \
	  imprimirCliente.c

NAME    = libft.a
OBJS    = $(SRC:.c=.o)
CFLAGS  = -Wall -Wextra -Werror
CC      = gcc
RM      = rm -f

.c.o:
	${CC} ${CFLAGS} -c $< -o $@

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all