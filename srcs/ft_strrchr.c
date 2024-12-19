#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (*(char *)(s + i) != (char)c)
	{
		if (i == 0)
			return (NULL);
		i--;
	}
	return ((char *)(s + i));
}