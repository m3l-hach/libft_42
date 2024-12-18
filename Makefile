SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c

OBJS = $(SRCS:.c=.o)

HEADER = libft.h

CC = cc

CFLAGS = -Wall -Werror -Wextra

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rc $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)
	rm -f a.out

re : fclean all

.PHONY : clean