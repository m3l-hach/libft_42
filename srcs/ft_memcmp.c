#include "../includes/libft.h"

int	ft_memcmp(const void *p1, const void *p2, size_t n)
{
	size_t i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(p1 + i) != *(unsigned char *)(p2 + i))
			return (*(unsigned char *)(p1 + i) - *(unsigned char *)(p2 + i));
		i++;
	}
	return (0);
}