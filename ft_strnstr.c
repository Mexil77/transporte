#include "libft.h"

char	*ft_strnstr(const char	*big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*loc;

	i = 0;
	j = 0;
	loc = (char *)big;
	while (big[i] != '\0')
	{
		while ((j < len) && (little[j] == big[i + j]) && (big[i + j] != '\0'))
			j++;
		if ((little[j] == '\0') || (j == len))
			return (loc += i);
		j = 0;
		i++;
	}
	return (NULL);
}