SRC	=	main.c \
		ft_size.c\
		ft_swap.c \
		ft_putstr.c \
		ft_bubble_sort.c \

NAME = bubble_sort
OBJS = ${SRC:.c=.o}
CC = cc
RM = rm -f
CFLAGS = -Wall -Wextra -Werror

.c.o :
	@ ${CC} ${CFLAGS} -g -c $< -o ${<:.c=.o}

$(NAME): $(OBJS)
	@ $(CC) $(CFLAGS) $(OBJS) -o $(NAME)  # Modificado para criar um executável

all: $(NAME)

clean:
	@ ${RM} $(OBJS)

fclean: clean
	@ ${RM} $(NAME)

re: fclean all