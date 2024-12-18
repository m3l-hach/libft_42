#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// define types.
int	ft_isalpha(int c); // check if c is alphabet.
int	ft_isdigit(int c); // check if c is digit.
int	ft_isalnum(int c); // check if c is alphabet or digit.
int	ft_isascii(int c); // check if c is ascii.
int	ft_isprint(int c); // check if c is printable charachter.

// memory manipulation.

// string manipulation.
size_t ft_strlen(char *str);

#endif