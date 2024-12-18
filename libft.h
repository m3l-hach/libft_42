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
size_t 	ft_strlen(const char *str); // give lenght of a string.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // copy while granting null terminating.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // concatenate while granting null terminating.
char	*ft_strchr(const char *s, int c); // find first occurence of c.
char	*ft_strrchr(const char *s, int c); // fing last occurence of c.
int		ft_strncmp(const char *s1, const char *s2, size_t n); // compare n charachters of two strings.

// char manipulationn.
int	ft_toupper(int c); 
int	ft_tolower(int c);

#endif