#include "../includes/libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t i;

	i = 0;
	if (dst == src)
		return (dst);
	else if (dst > src)
		ft_memcpy(dst, src, n);
	else
	{
		i = n - 1;
		while (i != 0)
		{
			*(char *)(dst + i) = *(char *)(src + i);
			i++;
		}
	}
	return (dst);
}