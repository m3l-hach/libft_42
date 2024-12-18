SRCS = ../srcs/ft_isalpha.c ../srcs/ft_isdigit.c ../srcs/ft_isalnum.c ../srcs/ft_isascii.c ../srcs/ft_isprint.c ../srcs/ft_strlen.c ../srcs/ft_strlcpy.c \
	../srcs/ft_strlcat.c ../srcs/ft_toupper.c ../srcs/ft_tolower.c ../srcs/ft_strchr.c ../srcs/ft_strrchr.c ../srcs/ft_strncmp.c

OBJS = $(SRCS:.c=.o)

HEADER = ../libft.h

CC = cc

CFLAGS = -Wall -Werror -Wextra -fPIC

NAME = libft.so

all : fclean $(NAME)

$(NAME) : $(OBJS)
	$(CC) -shared -o $(NAME) $(OBJS)

%.o : %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean :
	rm -f $(OBJS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : clean