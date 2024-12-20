#include "../includes/libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (*(char *)(ptr + i) != (char)c && i < n)
		i++;
	if (i == n - 1)
		return ((void *)(ptr + i));
	return (NULL);
}