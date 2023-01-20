FILES="ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c"

BIN="ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o"

NAME=libstr.a

gcc -c ${FILES}
ar -rc ${NAME} ${BIN}
ranlib ${NAME}
