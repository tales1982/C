SRCS = ft_putstr.c ft_display_file.c
OBJS = $(SRCS:.c=.o)
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
CC = gcc
NAME = ft_display_file


all:	$(NAME)

clean:
	$(RM) $(OBJS)

fclean:	clean
	$(RM) -f $(NAME)

.c.o:
	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

.PHONY:	all clean fclean
