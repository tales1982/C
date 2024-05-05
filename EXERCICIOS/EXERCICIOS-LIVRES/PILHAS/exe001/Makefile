SRC     = main.c \
          desempilhar_pilha.c \
          empilhar_pilha.c \
          inicializar_pilha.c \
          visualizar_pilha.c 

NAME    = pilha_exec
OBJS    = $(SRC:.c=.o)
CC      = cc
RM      = rm -f
DEBUG   = -g
CFLAGS  = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) $(DEBUG) -c $< -o $@

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re