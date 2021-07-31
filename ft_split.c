#include "libft.h"

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	size_t	cont_str;
	char	**split;

	i = -1;
	j = 0;
	k = 0;
	cont_str = 0;
	while (s[++i] != '\0')
		if (s[i] == c && i > 0)
			cont_str++;
	cont_str++;
	k = i + 1;
	i = -1;
	split = (char **)malloc(sizeof(char *) * (cont_str + 1));
	cont_str = 0;
	while (++i < k)
	{
		if (s[i] != c && s[i] != '\0')
			cont_str++;
		else
		{
			split[j] = (char *)malloc(sizeof(char) * (cont_str + 1));
			cont_str = 0;
			j++;
		}
	}
	split[j] = NULL;
	i = -1;
	j = 0;
	k = 0;
	while (s[++i] != '\0')
	{
		if (s[i] != c)
		{
			split[j][k] = s[i];
			k++;
		}
		else
		{
			split[j][k] = '\0';
			k = 0;
			j++;
		}
	}
	return (split);
}