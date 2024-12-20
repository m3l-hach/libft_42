#include "../includes/libft.h"

char	*ft_strdup(const char *str)
{
	char	*dup;

	dup = (char *)malloc(ft_strlen(str) + 1);
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, str, ft_strlen(str) + 1);
	return (dup);
}