#include "libft.h"

int main(void)
{
	char	**split;
	char	str1[] = "cola cco piñac";
	char	str2[] = "copi";
	int	i = -1;

	printf("ft_substr ORI : *%s*\n", str1);
	printf("ft_substr CPY : *%s*\n", ft_substr(str1, 0, 5));

	printf("\n");
	
	printf("ft_strjoin ORI : *%s*\n", str1);
	printf("ft_strjoin ORI : *%s*\n", str2);
	printf("ft_strjoin JOY : *%s*\n", ft_strjoin(str1, str2));
	
	printf("\n");

	printf("ft_strnstr ONE : *%s*\n", str1);
	printf("ft_strnstr TWO : *%s*\n", str2);
	printf("ft_strnstr FID : *%s*\n", ft_strnstr(str1, str2, 2));

	printf("\n");

	split = ft_split(str1, 'a');
	printf("ft_split STR_OR : *%s*\n", str1);
	while (split[++i] != NULL)
		printf("Palabra NO. %d : *%s*\n", i, split[i]);
	
	return (0);
}