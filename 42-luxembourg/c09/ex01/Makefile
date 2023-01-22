DIR = srcs
SRCS = ${DIR}/ft_putchar.c ${DIR}/ft_swap.c ${DIR}/ft_putstr.c ${DIR}/ft_strlen.c ${DIR}/ft_strcmp.c
HEADER = ./includes/ft.h
OBJS = ${SRCS:.c=.o}
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
CC = gcc
NAME = libft.a

.c.o: #Poderia ser %.o: %.c
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}:	${OBJS}
	ar -rc ${NAME} ${OBJS}
	ranlib ${NAME}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME} 

re:	fclean all

.PHONY:	all clean fclean re

