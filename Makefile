SRCS = ./srcs/ft_isalpha.c ./srcs/ft_isdigit.c ./srcs/ft_isalnum.c ./srcs/ft_isascii.c ./srcs/ft_isprint.c ./srcs/ft_strlen.c ./srcs/ft_strlcpy.c \
	./srcs/ft_strlcat.c ./srcs/ft_toupper.c ./srcs/ft_tolower.c ./srcs/ft_strchr.c ./srcs/ft_strrchr.c ./srcs/ft_strncmp.c

OBJS = $(SRCS:.c=.o)

HEADER = includes/libft.h

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