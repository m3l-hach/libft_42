#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <limits.h>

// define types.
int	ft_isalpha(int c); // check if c is alphabet.
int	ft_isdigit(int c); // check if c is digit.
int	ft_isalnum(int c); // check if c is alphabet or digit.
int	ft_isascii(int c); // check if c is ascii.
int	ft_isprint(int c); // check if c is printable charachter.

// memory manipulation.
void	*ft_memset(void *ptr, int c, size_t n); // set n bytes from ptr to c.
void	ft_bzero(void *ptr, size_t n); // set n bytes from ptr to '\0'
void	*ft_memcpy(void *dst, const void *src, size_t n); // copy n bytes from src to dst.
void	*ft_memmove(void *dst, const void *src, size_t n); // copy n bytes from src to dst, handling overlap.
void	*ft_memchr(const void *ptr, int c, size_t n); // search the first instance of c in n bytes from ptr.
int		ft_memcmp(const void *p1, const void *p2, size_t n); // compares first n bytes from p1 and p2;
void	*ft_calloc(size_t nmemb, size_t size); // allocate and clear.

// string manipulation.
size_t 	ft_strlen(const char *str); // give lenght of a string.
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize); // copy while granting null terminating.
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize); // concatenate while granting null terminating.
char	*ft_strchr(const char *s, int c); // find first occurence of c.
char	*ft_strrchr(const char *s, int c); // find last occurence of c.
int		ft_strncmp(const char *s1, const char *s2, size_t n); // compare n charachters of two strings.
char	*ft_strnstr(const char *big, const char *little, size_t len); // search for little in big within len.
int		ft_atoi(const char *str); // converts str to and intiger.
char	*ft_strdup(const char *str); // create a duplicate of str.

// char manipulationn.
int	ft_toupper(int c); 
int	ft_tolower(int c);

#endif