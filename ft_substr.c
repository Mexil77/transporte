#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*aux;
	size_t	s_len;
	size_t	i;

	s_len = ft_strlen(s);
	i = -1;
	if ((start > s_len - 1) || (start + len - 1 > s_len))
		return (NULL);
	aux = (char *)malloc(sizeof(char) * (len + 1));
	if (aux == NULL)
		return (NULL);
	while (++i < len)
		aux[i] = s[i + start];
	aux[i] = '\0';
	return(aux);
}